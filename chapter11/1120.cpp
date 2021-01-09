#include<iostream>
#include <fstream>
#include<vector>
#include<unordered_map>
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
using std::unordered_map;

int main(){
	string word;
	unordered_map<string,int> map;
	while(cin>>word){	
		auto ret = map.insert({word,1});
		if(!ret.second)
			++ret.first->second;
	}

	for(const auto &w:map)
		cout<<w.first<<" occurs "<<w.second<<" time"<<endl;

}
