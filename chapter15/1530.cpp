#include<iostream>
#include <ostream>
#include<set>
#include<memory>
#include <fstream>
#include<algorithm>
#include<vector>
#include <algorithm>
#include<cctype>
#include<stdexcept>
#include"1515.h"
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
using std::shared_ptr;
class Basket{
public:
	void add_item(const shared_ptr<Quote> &sale){ items.insert(sale); }
	void add_item(const Quote &sale){ items.insert(shared_ptr<Quote>(sale.clone())); }
	void add_item(Quote &&sale){ items.insert(shared_ptr<Quote>(std::move(sale).clone())); }
	double total_receipt(std::ostream&) const;
private:
	static bool compare(const std::shared_ptr<Quote> &lhs,const std::shared_ptr<Quote> &rhs){ return lhs->isbn()<rhs->isbn(); }
	std::multiset<std::shared_ptr<Quote>,decltype(compare)*> items{compare};
};
double Basket::total_receipt(std::ostream &os) const{
	double sum = 0.0;
	for(auto iter = items.cbegin();iter != items.cend();iter = items.upper_bound(*iter)){
		sum += print_total(os,**iter,items.count(*iter));
	}
	os<<"Total Sale: "<<sum<<endl;
	return sum;
}
int main(){
	Basket bsk;
	bsk.add_item(Quote("abc",100));
	Bulk_quote c("aaa",120,12,10);
	bsk.add_item(c);
	bsk.total_receipt(cout);
	
}
