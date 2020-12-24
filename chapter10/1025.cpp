#include<iostream>
#include <functional>
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
using namespace std::placeholders;
void print(const vector<string> &v);
void elimDups(vector<string> &words){
	std::sort(words.begin(),words.end());
	auto unqend = std::unique(words.begin(),words.end());
	words.erase(unqend,words.end());
}

void print(const vector<string> &v){
	cout<<"size:"<<v.size()<<"     ";
	for(const auto &s:v)
		cout<<s<<" ";
	cout<<endl;
}
bool check_size(const string &s,string::size_type sz){
	return s.size()>=sz;
}
void biggies(vector<string> &words,vector<string>::size_type sz){
	elimDups(words);
	auto findend = std::partition(words.begin(), words.end(), std::bind(check_size,_1,sz));
	auto count = findend - words.begin();
	cout<<count<<" word(s) "<<"of length "<<sz<<" or longer"<<endl;
	cout<<"as follows:"<<endl;
	for(auto beg = words.begin();beg!=findend;++beg)
		cout<<*beg<<" ";
	cout<<endl;
}
int main(){
	vector<string>::size_type sz;
	vector<string> words{"b","abc","dsfsdf","dfdff","12eqsd3r","sdf2fds2","a","123","12e31ds","1e2s","123d2"};
	print(words);
	cout<<"equals or longer:";
	cin>>sz;
	biggies(words,sz);
}
