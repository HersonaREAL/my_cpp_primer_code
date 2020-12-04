#include<iostream>

using std::cin;
using std::cout;


int main(){
	std::string s1;
	std::string s2;
	cout<<"plz input first string"<<std::endl;
	getline(cin,s1);
	cout<<"plz input secord string"<<std::endl;
	getline(cin,s2);
	if(s1 == s2)
		cout<<s1<<std::endl;	
	else if(s1>s2)
		cout<<s1<<std::endl;
	else
		cout<<s2<<std::endl;
	return 0;
}
