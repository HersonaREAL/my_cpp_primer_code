#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int compare(const int &a,const int *b){
	return a>(*b)?a:(*b);
}
int main(){
	int a,*b;
	cout<<"a:";
	cin>>a;
	cout<<"b:";
	cin>>(*b);
	cout<<compare(a,b)<<endl;
	return 0;
}
