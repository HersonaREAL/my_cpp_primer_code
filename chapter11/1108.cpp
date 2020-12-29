#include<iostream>
#include <fstream>
#include<vector>
#include <algorithm>
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
	vector<string> v;
	string word;
	while(cin>>word){
		if(std::find(v.begin(),v.end(),word)!=v.end())
			continue;
		v.push_back(word);
	}
	for(const auto &s:v)
		cout<<s<<" ";
	cout<<endl;
}
