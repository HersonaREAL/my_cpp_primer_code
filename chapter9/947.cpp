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

int main(){
	string s("ab2c3d7R4E6");
	string ch("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	string num("0123456789");
	string::size_type pos = 0;
	cout<<s<<endl;
	//version 1
	/*while((pos = s.find_first_of(num,pos))!=string::npos){
		cout<<"num index:"<<pos<<"   element:"<<s[pos]<<endl;
		++pos;
	}
	pos = 0;
	while((pos = s.find_first_of(ch,pos))!=string::npos){
		cout<<"num index:"<<pos<<"   element:"<<s[pos]<<endl;
		++pos;
	}
	*/

	//version 2
	while((pos = s.find_first_not_of(ch,pos))!=string::npos){
		cout<<"num index:"<<pos<<"   element:"<<s[pos]<<endl;
		++pos;
	}
	pos = 0;
	while((pos = s.find_first_not_of(num,pos))!=string::npos){
		cout<<"num index:"<<pos<<"   element:"<<s[pos]<<endl;
		++pos;
	}
}
