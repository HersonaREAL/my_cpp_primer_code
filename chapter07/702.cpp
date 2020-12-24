#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data{
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

int main(){
	return 0;
}
