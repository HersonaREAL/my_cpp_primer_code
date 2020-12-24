#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
#include"Chapter6.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	int x;
	cout<<"x:";
	cin>>x;
	cout<<"fact:"<<fact(x)<<endl;
}
