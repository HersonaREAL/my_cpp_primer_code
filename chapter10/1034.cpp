#include<iostream>
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
	vector<int> num{1,2,3,4,5,6,7,8,9};
	for(auto beg = num.begin();beg!=num.end();++beg)
		cout<<*beg<<" ";
	cout<<endl;
	for(auto beg = num.crbegin();beg!=num.crend();++beg)
		cout<<*beg<<" ";
	cout<<endl;
}
