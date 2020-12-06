#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int test(int x){
	static int y = 1;
	cout<<"static y:"<<y<<" ";
	return x*(y++);
}
int main(){
	for(int i = 0;i<10;++i)
		cout<<"i:"<<i<<" "<<test(i)<<endl;
}
