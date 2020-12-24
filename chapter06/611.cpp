#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
void reset(int &x){ x = 0; }
int main(){
	int x;
	cout<<"x:";
	cin>>x;
	reset(x);
	cout<<"reset x:"<<x<<endl;
}
