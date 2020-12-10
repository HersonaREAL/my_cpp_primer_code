#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data{
	Sales_data() = default;
	Sales_data(const string &s,unsigned n,double p):book_id(s),units_sold(n),book_price(p),revenue(p*n){}
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


int main(){
	Sales_data test1,test2;
	Sales_data test3("abc",10,12.8);
	print(cout,test3);
	cout<<endl;
	return 0;
}
