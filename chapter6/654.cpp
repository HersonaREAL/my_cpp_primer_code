#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int func(int a ,int b){
	cout<<a<<" "<<b<<endl;
	return a+b;
}

int main(){
	vector<decltype(func)*> a;
	vector<int(*)(int,int)> b;
	a.push_back(func);
	b.push_back(func);
	cout<<a[0](1,2)<<endl;
	cout<<b[0](3,4)<<endl;
	return 0;	
}
