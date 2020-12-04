#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	vector<string> text;
	string tmp;
	while(cin>>tmp)
		text.push_back(tmp);
	for(auto c:text)
		cout<<c<<" ";
	cout<<endl;
}
