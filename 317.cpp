#include<iostream>
#include<vector>
#include<cctype>
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;

int main(){
	vector<string> text;
	string tmp;
	while(cin>>tmp)
		text.push_back(tmp);
	for(auto &v:text)
		for(auto &c:v)
			c=toupper(c);
	for(auto v:text)
		cout<<v<<endl;

}
