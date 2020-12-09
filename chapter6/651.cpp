#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
void f(){
	cout<<"nothing"<<endl;
}
void f(int a){
	cout<<"Only one int :"<<a<<endl;
}
void f(int a , int b){
	cout<<"two int:"<<a<<" "<<b<<endl;
}
void f(double a,double b = 3.14){
	cout<<"two double:"<<a<<" "<<b<<endl;
}
int main(){
	f();
	//f(2.56,42);
	//f(42,2.56);
	f(42);
	f(42,0);
	f(2.56);
	f(2.56,2.2);
}
