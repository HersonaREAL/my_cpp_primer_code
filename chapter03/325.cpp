#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	vector<unsigned> scores(11,0);
	unsigned grade;
	auto it = scores.begin();
	while(cin>>grade)
		++*(it+(grade/10));
	for(;it!=scores.end();++it)
		cout<< *it <<" ";
	cout<<endl;	
}
