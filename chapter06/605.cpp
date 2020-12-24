#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int myAbs(int x){return x>0?x:-x;}

int main(){
	int x;
	cout<<"input x:";
	cin>>x;
	cout<<"abs of x:"<<myAbs(x)<<endl;	
}
