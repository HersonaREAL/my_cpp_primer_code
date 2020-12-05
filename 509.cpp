#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	char tmp;
	int count = 0;
	while(cin>>tmp){
		switch(tmp){
			case 'a': case 'e': case 'i': case 'o': case 'u':
			     ++count;
			default:
			     ;
		}
	}
	cout<<"元音出现次数:"<<count<<endl;
}
