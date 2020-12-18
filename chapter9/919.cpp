#include<iostream>
#include <fstream>
#include<vector>
#include<deque>
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
	std::list<string> strq;
	string tmp;
	while(cin>>tmp)
		strq.push_back(tmp);
	for(auto ptr = strq.begin();ptr!=strq.end();++ptr)
		cout<<*ptr<<endl;
	return 0;	

}
