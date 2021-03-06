#include<iostream>
#include <fstream>
#include<vector>
#include <algorithm>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
class HasPtr{
public:
	HasPtr(const string &s = std::string()):
		ps(new string(s)),i(0) {}
	HasPtr(const HasPtr &src):
		ps(new string(*src.ps)),i(src.i){};
	HasPtr& operator=(const HasPtr &src){
		i = src.i;
		delete ps;
		ps = new string(*src.ps);
		return *this;	
	}
	void print(){ cout<<*ps<<endl; }
private:
	string *ps;
	int i;
	
};
int main(){
	HasPtr a("abcef");
	a.print();
	HasPtr b = a;
	b.print();
	b = HasPtr("sdfsdfsdfs");
	b.print();
	return 0;
}
