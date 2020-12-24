#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
void swapPtr(int *&a,int *&b){
	int *tmp = a;
	a = b;
	b = tmp;
}
int main(){
	int *a,*b;
	cout<<"a:"<<a<<" b:"<<b<<endl;
	swapPtr(a,b);
	cout<<"a:"<<a<<" b:"<<b<<endl;
	return 0;
}
