#ifndef c1503_H__
#define c1503_H__
#include <algorithm>
#include <bits/c++config.h>
#include <ostream>
#include<string>
#include<iostream>
#include <utility>
class Quote{
public:
	Quote() = default;
	Quote(const std::string &book,double sales_price):
		bookNo(book),price(sales_price){}
	std::string isbn() const { return bookNo; }
	virtual double net_price(std::size_t n)const{ return n*price; }
	virtual Quote* clone()const &{ return new Quote(*this); }
	virtual Quote* clone()const &&{ return new Quote(std::move(*this)); }
	virtual void debug() const;
	virtual ~Quote() = default;
private:
	std::string bookNo;
protected:
	double price = 0.0;

};
class Disc_quote:public Quote {
public:
	Disc_quote() = default;
	Disc_quote(const std::string &book,double price,std::size_t qty,double disc):
		Quote(book,price),quantity(qty),discount(disc){}
	void debug()const override;
	double net_price(std::size_t) const = 0;
protected:
	std::size_t quantity = 0;
	double discount = 0.0;
};

class Bulk_quote:public Disc_quote{
public:
	Bulk_quote(const std::string &book,double p,std::size_t qty,double disc):
	Disc_quote(book,p,qty,disc){}
	double net_price(std::size_t n) const override;
	void debug() const override;
	
	Bulk_quote* clone()const & override{ return new Bulk_quote(*this); }
	Bulk_quote* clone()const && override{ return new Bulk_quote(std::move(*this)); }

};
void Quote::debug()const {
	std::cout<<"bookNo: "<<bookNo<<std::endl;
	std::cout<<"price: "<<price<<std::endl;
}
void Disc_quote::debug()const {
	Quote::debug();
	std::cout<<"qty: "<<quantity<<std::endl;
	std::cout<<"discount: "<<discount<<std::endl;
}
void Bulk_quote::debug()const {
	Disc_quote::debug();
}
double Bulk_quote::net_price(std::size_t cnt) const{
	if(cnt<=quantity)
		return cnt*price*discount+10000000;
	else
		return quantity*price*discount+(cnt-quantity)*price;
}
double print_total(std::ostream &os,const Quote &item,size_t n) {
	double ret = item.net_price(n);
	os<<"ISBN: "<<item.isbn()
	  <<" # sold: "<<n<<" total due: "<<ret<<std::endl;
	return ret;
}
#endif
