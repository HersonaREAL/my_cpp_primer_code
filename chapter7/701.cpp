#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;
using std::endl;
struct Sales_data{
	std::string book_id;
	std::string book_name;
	unsigned units_sold;
	double book_price = 0.0;
	double revenue = 0.0;	
};

int main(){
	Sales_data total;
	if(cin>>total.book_id>>total.units_sold>>total.revenue){
			Sales_data trans;
			while(cin>>trans.book_id>>trans.units_sold>>trans.revenue){
				if(total.book_id == trans.book_id){
					total.units_sold+=trans.units_sold;
					total.revenue+=trans.revenue;
				}
				else{
					cout<< total.book_id<<" "<<total.units_sold<<" "<<total.revenue<<endl;
					total = trans;
				}
			}
			cout<<total.book_id<<" "<<total.units_sold<<" "<<total.revenue<<endl;
	}else{
		cout<<"No input?"<<endl;
		return -1;
	}
	return 0;
	return 0;
}
