#include<iostream>
#include <fstream>
#include<vector>
#include <list>
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
	std::list<string> nums{"abc","abc","abc","ccc","ccc","cc"};
	for(const string &a :nums)
		cout<<a<<" ";
	cout<<endl;
	string val;
	cin>>val;
	cout<<val<<" appear "<<std::count(nums.begin(), nums.end(), val)<<" times"<<endl;
}
