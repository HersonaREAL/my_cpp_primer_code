#include<iostream>
#include <istream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data{
	Sales_data() = default;
	Sales_data(const string &s,unsigned n,double p):book_id(s),units_sold(n),book_price(p),revenue(p*n){}
	Sales_data(std::istream &is);
	string book_id;
	string book_name;
	unsigned units_sold;
	double book_price = 0.0;
	double revenue = 0.0;
	string isbn() const {return this->book_id;}
	Sales_data &combine(Sales_data rhs);	
};
Sales_data& Sales_data::combine(Sales_data rhs){
	this->units_sold+=rhs.units_sold;
	this->revenue+=rhs.revenue;
	return *this;
}
Sales_data add(const Sales_data a,const Sales_data b){
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

Sales_data::Sales_data(std::istream &is){ read(cin,*this); }
int main(){
	Sales_data total(cin);
	Sales_data trans;
	if(total.isbn().empty()){
		std::cerr<<"No data !!!!!!!!!!!!!!!"<<endl;
		return -1;
	}
	while(read(cin,trans)){
		if(total.isbn()==trans.isbn())
			total = add(total,trans);
		else{
			print(cout,total)<<endl;
			total = trans;
		}		
	}
	print(cout,total);
}
