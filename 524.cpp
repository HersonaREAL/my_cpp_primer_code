#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	int a,b;
	
	cin>>a>>b;
	if(!b)
		throw std::runtime_error("被除数错误！\n");
	cout<<a/b<<endl;
	
}
