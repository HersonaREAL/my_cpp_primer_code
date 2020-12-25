#include<iostream>
#include <fstream>
#include<vector>
#include <list>
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
using std::list;
void print(const list<string> &lst){
	for(const string &s:lst)
		cout<<s<<" ";
	cout<<endl;
}
void elimDups(list<string> &words){
	print(words);
	words.sort();
	print(words);
	words.unique();
	print(words);
}

int main(){
	list<string> words{"aa","ab","ac","aa","bb","cd","cd","md","aa","cc"};
	elimDups(words);	
}
