#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	string rsp;
	do{	
		string str1,str2;
		cout<<"input first string:";
		cin>>str1;
		cout<<"input second string:";
		cin>>str2;
		cout<<"The shorter string is : "<<(str1.size()>str2.size()?str2:str1)<<endl;
		cout<<"continue?(y/n):";
		
	}while(cin>>rsp&&rsp[0]!='n');
	return 0;
}
