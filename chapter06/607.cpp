#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int test(){
	static int x = 0;
	return x++;
}
int main(){
	for(int i = 0;i<20;++i)
		cout<<"func return:"<<test()<<endl;
}
