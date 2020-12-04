#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	int x[10]; int *p = x;
	cout<<sizeof(x)/sizeof(*x)<<endl;
	cout<<sizeof(p)/sizeof(*p)<<endl;
}
