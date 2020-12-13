#include<iostream>
#include <istream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Sales_data{
public:
	Sales_data(string s,string n,unsigned cnt,double price):book_id(s),book_name(n),units_sold(cnt),book_price(price),revenue(cnt*price){}
	Sales_data():Sales_data("","",0,0){}
	Sales_data(string s):Sales_data(s,"",0,0){}
	Sales_data(string s,string n):Sales_data(s,n,0,0){}
	Sales_data(std::istream &is):Sales_data(){ read(is,*this); }
private:friend Sales_data add(const Sales_data &a,const Sales_data &b);
	friend std::istream &read(std::istream &is,Sales_data &Obj);
	friend std::ostream &print(std::ostream &os,const Sales_data &Obj); 
	string book_id;
	string book_name;
	unsigned units_sold;
	double book_price = 0.0;
	double revenue = 0.0;
	Sales_data &combine(Sales_data rhs);	
public:	string isbn() const {return this->book_id;}
};
Sales_data& Sales_data::combine(Sales_data rhs){
	this->units_sold+=rhs.units_sold;
	this->revenue+=rhs.revenue;
	return *this;
}
Sales_data add(const Sales_data &a,const Sales_data &b){
	Sales_data newObj = a;
	newObj.combine(b);
	return newObj;
}
std::istream &read(std::istream &is,Sales_data &Obj){
	is>>Obj.book_id>>Obj.book_name>>Obj.units_sold>>Obj.book_price;
	Obj.revenue = Obj.units_sold*Obj.book_price;
	return is;
}
std::ostream &print(std::ostream &os,const Sales_data &Obj){
	os<<"book isbn:"<<Obj.book_id<<" "<<" book name:"<<Obj.book_name<<" book sold:"<<Obj.units_sold<<" book revenue:"<<Obj.revenue;
	return os;
}


int main(){
	Sales_data a;
	print(cout,a)<<endl;
	Sales_data b("12-12-12");
	print(cout,b)<<endl;
	Sales_data c("13-13-13","tetetetest",12,12);
	print(cout,c)<<endl;
	Sales_data d(cin);
	print(cout,d)<<endl;
	Sales_data e(d);
	print(cout,e)<<endl;
	
	return 0;

}
