#include<iostream>
#include <fstream>
#include<vector>
#include <forward_list>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
void iiiiiiiiiiiiiiiiiinsert(std::forward_list<string> &flist,const string &s1,const string &s2){
	auto pre = flist.before_begin();
	auto cur = flist.begin();
	while(cur!=flist.end()){
		if(*cur==s1){
			flist.insert_after(cur,s2);
			return;
		}
		pre = cur;
		++cur;
	}
	flist.insert_after(pre,s2);
	
}
int main(){
	std::forward_list<string> flist = {"abc","aaa","123","ccc","bbb","dfsfds","sdfds","heh"};
	for(const auto &s:flist)
		cout<<s<<" ";
	cout<<endl;
	string s1,s2;
	cout<<"insert after:";
	cin>>s1;
	cout<<"insert what:";
	cin>>s2;
	iiiiiiiiiiiiiiiiiinsert(flist, s1, s2);
	cout<<"result:"<<endl;
	for(const auto &s:flist)
		cout<<s<<" ";
	cout<<endl;	
}
