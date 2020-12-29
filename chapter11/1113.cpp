#include<iostream>
#include <fstream>
#include<vector>
#include<utility>
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
	vector<std::pair<string,int>> v;
	string word;
	int num;
	while(cin>>word>>num){
		v.push_back(std::make_pair(word,num));
	//	v.push_back(std::pair<string,int>(word,num));
	//	v.push_back({word,num});	
	}
	for(const auto &p:v)
		cout<<p.first<<":"<<p.second<<endl;
	return 0;
}
