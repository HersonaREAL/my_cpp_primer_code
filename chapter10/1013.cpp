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
bool isbigerfive(const string &s){
	return s.size()>=5;
}
int main(){
	vector<string> words;
	string word;
	while(cin>>word)
		words.push_back(word);
	for(const string &s:words)
		cout<<s<<" ";
	cout<<endl;
	auto bigend = std::partition(words.begin(),words.end(),isbigerfive);
	for(auto beg = words.begin();beg!=bigend;++beg)
		cout<<*beg<<" ";
	cout<<endl;
}
