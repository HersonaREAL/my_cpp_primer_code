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
void print(const vector<string> &v);
bool isShorter(const string &s1,const string &s2);
void elimDups(vector<string> &words){
	print(words);
	std::sort(words.begin(),words.end());
	print(words);
	auto unqend = std::unique(words.begin(),words.end());
	print(words);
	words.erase(unqend,words.end());
	print(words);
}

bool isShorter(const string &s1,const string &s2){
	return s1.size()<s2.size();
}
void print(const vector<string> &v){
	cout<<"size:"<<v.size()<<"     ";
	for(const auto &s:v)
		cout<<s<<" ";
	cout<<endl;
}
int main(){
	vector<string> words;
	string word;
	while(cin>>word)
		words.push_back(word);
	elimDups(words);
	std::stable_sort(words.begin(),words.end(),isShorter);
	print(words);
}
