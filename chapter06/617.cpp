#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
bool hasUpper(const string &s){
	for(auto chptr = s.begin();chptr!=s.end();++chptr)
		if(isupper(*chptr))
			return true;
	return false;
}
void allToLower(string &s){
	for(auto &ch :s)
		ch = tolower(ch);
}
int main(){
	string s;
	cout<<"input string :";
	cin>>s;
	if(hasUpper(s))
		cout<<"There are upper characters in this string."<<endl;
	else
		cout<<"There are not upper characters in this string."<<endl;
	allToLower(s);
	cout<<s<<endl;
}
