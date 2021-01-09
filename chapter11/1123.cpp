#include<iostream>
#include <fstream>
#include<vector>
#include<map>
#include <algorithm>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::multimap;
using std::endl;
using std::string;
using std::vector;

int main(){
	multimap<string,string> childMap;
	string lastName,name;
	while(cin>>lastName>>name){
		childMap.insert({lastName,name});
	}
	for(const auto& m:childMap){
			cout<<m.first<<" "<<m.second<<" "<<endl;
	}
}
