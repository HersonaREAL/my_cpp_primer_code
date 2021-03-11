#include<iostream>
#include"1511.h"
#include <fstream>
#include<vector>
#include <algorithm>
#include<memory>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
using std::shared_ptr;
int main(){
	vector<shared_ptr<Quote>> v;
	auto sa = std::make_shared<Bulk_quote>("doki",100,10,0.3),sb = std::make_shared<Bulk_quote>("dokidoki",200,5,0.4);
	v.push_back(sa);
	v.push_back(sb);
	int sum = 0;
	for(auto &q:v)
		sum+=q->net_price(10);
	cout<<sum<<endl;
}
