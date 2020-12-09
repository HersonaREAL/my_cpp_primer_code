#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
#include<climits>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int funcAdd(int a ,int b){
	cout<<a<<"+"<<b<<"=";
	return a+b;
}
int funcSub(int a,int b){
	cout<<a<<"-"<<b<<"=";
	return a-b;
}
int funcMul(int a,int b){
	cout<<a<<"*"<<b<<"=";
	return a*b;
}
int funcDiv(int a,int b){
	cout<<a<<"/"<<b<<"=";
	if(b) 
		return a/b;
	else 
		return INT_MAX;
}

int main(){
	vector<decltype(funcAdd)*> a;
	vector<int(*)(int,int)> b;
	a.push_back(funcAdd);
	a.push_back(funcSub);
	a.push_back(funcMul);
	a.push_back(funcDiv);
	b.push_back(funcAdd);
	b.push_back(funcSub);
	b.push_back(funcMul);
	b.push_back(funcDiv);
	cout<<a[0](34567,123)<<endl;
	cout<<a[1](12345,1234)<<endl;
	cout<<a[2](1236,1223)<<endl;
	cout<<a[3](1231441241,123123)<<endl;
	cout<<"now b"<<endl;
	cout<<b[0](1,2)<<" "<<b[1](2,3)<<" "<<b[2](3,4)<<" "<<b[3](7,3)<<endl;
	return 0;	
}
