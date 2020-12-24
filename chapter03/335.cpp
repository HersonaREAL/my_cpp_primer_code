#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	int a[10];
	for(auto i:a)
		cout<< i <<" ";
	cout<<endl;
	for(auto i = std::begin(a); i!=std::end(a);++i)
		*i = 0;
	for(auto i :a)
		cout<< i <<" ";
	cout<<endl;	
}
