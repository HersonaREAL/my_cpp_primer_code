#include<iostream>
#include <fstream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
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
	std::unordered_set<char> punct{'.',',','/',';','\'','?','!','\"','(',')',':','<','>','/','[',']','{','}'};

	while(cin>>word){	
		for(auto beg = word.begin();beg!=word.end();){
			*beg = std::tolower(*beg);
			if(punct.find(*beg)!=punct.end())
				beg = word.erase(beg);
			else
				++beg;
		}
		++map[word];
	}
	for(const auto &w:map)
		cout<<w.first<<" occurs "<<w.second<<" time"<<endl;

}
