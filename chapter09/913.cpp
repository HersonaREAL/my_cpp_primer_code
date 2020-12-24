#include<iostream>
#include <fstream>
#include<vector>
#include <list>
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
	std::list<int> a(10,2);
	vector<int> c(9,2333);
	vector<double> b(a.begin(),a.end());
	vector<double> d(c.begin(),c.end());
	for(auto i :a)
		cout<<i<<" ";
	cout<<endl;
	for(auto i :c)
		cout<<i<<" ";
	cout<<endl;
	for(auto i :b)
		cout<<i<<" ";
	cout<<endl;
	for(auto i :d)
		cout<<i<<" ";
	cout<<endl;
	
	
	


}
