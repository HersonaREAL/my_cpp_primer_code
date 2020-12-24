#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
string (&func(string (&a)[10]))[10]{
	return a;
}
int main(){
	string a[10] = {"1","2"};
	string (&c)[10] = func(a);
	for(auto i = 0;i<10;++i)
		cout<<c[i]<<" ";
	cout<<endl;
	return 0;
}
