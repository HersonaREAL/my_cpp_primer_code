#include<iostream>
#include <algorithm>
#include <vector>
#include<string>
using std::cin;
using std::vector;
using std::cout;
using std::endl;
using std::string;

class Sales_data{
	friend Sales_data add(const Sales_data &a,const Sales_data &b);
	friend std::istream &read(std::istream &is,Sales_data &Obj);
	friend std::ostream &print(std::ostream &os,const Sales_data &Obj); 
	string book_id;
	string book_name;
	unsigned units_sold;
	double book_price = 0.0;
	double revenue = 0.0;
	Sales_data &combine(Sales_data rhs);	
	inline double avg_price()const;
public:	string isbn() const {return this->book_id;}
	Sales_data(const string &id){ this->book_id = id; }
	Sales_data(const char *str){book_id = str;}
};
inline double Sales_data::avg_price()const{ return units_sold?revenue/units_sold:0; }
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

bool compareIsbn(const Sales_data &a,const Sales_data &b){
	return a.isbn()<b.isbn();
}
int main(){
	vector<Sales_data> a{"11-11","11-10","11-9","10-1","10-11","9-19","12-1","11-7"};
	for(const Sales_data &out:a)
		cout<<out.isbn()<<" ";
	cout<<endl;
	std::sort(a.begin(),a.end(),[](const Sales_data &a,const Sales_data &b){ return a.isbn()<b.isbn();});
	for(const Sales_data &out:a)
		cout<<out.isbn()<<" ";
	cout<<endl;
	return 0;
}
