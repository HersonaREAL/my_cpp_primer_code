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
	Sales_data total;
	if(cin>>total.book_id>>total.units_sold>>total.revenue){
		Sales_data trans;
		while(cin>>trans.book_id>>trans.units_sold>>trans.revenue){
			if(total.isbn()==trans.isbn())
				total.combine(trans);
			else{
				cout<<total.book_id<<" "<<total.units_sold<<" "<<total.revenue<<endl;
			       	total = trans;	
			}
		}
		cout<<total.book_id<<" "<<total.units_sold<<" "<<total.revenue<<endl;
		
			
	}else{
		std::cerr<<"No data?"<<endl;
		return -1;
	}
	return 0;
}
