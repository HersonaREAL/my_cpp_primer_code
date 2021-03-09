#include <functional>
#include<iostream>
#include <fstream>
#include<vector>
#include <algorithm>
#include<functional>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
using namespace std::placeholders;
int main(){
	//a
	vector<int> v = {1,1,2,3,4,1111112,23,1123,13,1024,1234};
	std::greater<int> g;
	auto f = std::bind(g,_1,1024);
	cout<<"bigger than 1024 appear:"<<std::count_if(v.begin(),v.end(),f)<<endl;
	
	//b
	vector<string> sv = {"pooh","pooh","shit","pooh","ddddddddd"};
	std::not_equal_to<string> nqt;
	auto f1 = std::bind(nqt,_1,"pooh");
	auto it = std::find_if(sv.begin(),sv.end(),f1);
	if(it!=sv.end())
		cout<<"^^ The fisrt word which is not equal \"pooh\" is "<<*it<<endl;
	else
		cout<<"^^_"<<endl;
	
	//c
	std::multiplies<int> mul;
	auto f2 = std::bind(mul,_1,2);
	for(auto &i:v)
		i = f2(i);
	for(auto i :v)
		cout<<i<<" ";
	cout<<endl;
}
