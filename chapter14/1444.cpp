#include<iostream>
#include <fstream>
#include<vector>
#include <algorithm>
#include<cctype>
#include<functional>
#include<stdexcept>
#include<unordered_map>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
int add(int i,int j){
	return i+j;
}
int main(){
	std::unordered_map<string,std::function<int(int,int)>> funcMap;
	funcMap["+"] = add;
	funcMap["-"] = [](int a,int b){ return a-b; };
	funcMap["*"] = std::multiplies<int>(); 
	funcMap["/"] = std::divides<int> ();
	funcMap["%"] = std::modulus<int> ();
	int a,b;
	string sym;
	cin>>a>>sym>>b;
	cout<<"= "<<funcMap[sym](a,b)<<endl;
}
