#include<iostream>
#include <fstream>
#include<vector>
#include<list>
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
	std::list<const char *> a= {"cao","ee","bilibili","tou"};
	vector<string> b;
	b.assign(a.begin(),a.end());
	for(const auto &i:b)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}
