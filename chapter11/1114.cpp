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
using std::endl;
using std::string;
using std::vector;

int main(){
	std::map<string,vector<std::pair<string,string>>> childMap;
	string lastName,name,birth;
	while(cin>>lastName>>name>>birth){
		childMap[lastName].push_back({name,birth});
	}
	for(const auto& m:childMap){
		for(const auto v:m.second){
			cout<<v.first<<" "<<m.first<<" "<<v.second<<endl;
		}
	}
}
