#include<iostream>
#include"1511.h"
#include <fstream>
#include<vector>
#include <algorithm>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
int main(){
	vector<Quote> v;
	Bulk_quote a("doki",100,10,0.3),b("dokidoki",200,5,0.4);
	v.push_back(a);
	v.push_back(b);
	int sum = 0;
	for(auto &q:v)
		sum+=q.net_price(10);
	cout<<sum<<endl;
}
