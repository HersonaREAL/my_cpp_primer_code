#include<iostream>
#include <map>
#include <fstream>
#include<vector>
#include <algorithm>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::multimap;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;

int main(){
	multimap<string,string> authorMap;
	string author,book;
	while(cin>>author>>book)
		authorMap.insert({author,book});
	cout<<"\norigin:"<<endl;
	for(const auto &p:authorMap)
		cout<<p.first<<" "<<p.second<<endl;
		
}
