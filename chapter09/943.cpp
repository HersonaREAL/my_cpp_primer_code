#include<iostream>
#include <fstream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
void rrrreplace(string &s,const string &oldVal,const string &newVal){
	int oldValLen = oldVal.size();
	int newValLen = newVal.size();
	for(auto it = s.begin();it!=s.end();++it){
		if(it+oldValLen!=s.end()){
			string tmp(it,it+oldValLen);
			if(tmp == oldVal){
				it = s.erase(it,it+oldValLen);
				it = s.insert(it,newVal.begin(),newVal.end());
				it+=newValLen;
			}
		}
	}
}
int main(){
	string s("thof__dsf__sdf__dsf__thru__tho__abcthrue_");
	cout<<s<<endl;
	rrrreplace(s, "tho","though");	
	cout<<s<<endl;
	rrrreplace(s,"thru","through");
	cout<<s<<endl;
}
