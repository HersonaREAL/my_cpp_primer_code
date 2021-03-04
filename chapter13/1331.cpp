#include <bits/c++config.h>
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
	friend void swap(HasPtr &a,HasPtr &b);
	HasPtr(const string &s = std::string()):
		ps(new string(s)),i(0),use(new std::size_t(1)) {}
	HasPtr(const HasPtr& src):ps(src.ps),i(src.i),use(src.use){ ++*use;  }
	~HasPtr(){
		if(--*use==0){
			delete ps;
			delete use;
		}
	}
	HasPtr& operator=(const HasPtr &src){
		++*src.use;
		if(--*use==0){
			delete ps;
			delete use;
		}
		ps = src.ps;
		i = src.i;
		use = src.use;
		return *this;
	}
	bool operator<(const HasPtr &src){
		return *ps<*src.ps;
	}
	void print(){ cout<<*ps<<endl; }
private:
	string *ps;
	int i;
	std::size_t *use;
};

void swap(HasPtr &a,HasPtr &b){
	using std::swap;
	swap(a.ps,b.ps);
	swap(a.i,b.i);
	swap(a.use,b.use);
	cout<<"swap complete"<<endl;
}
int main(){
	HasPtr a("abcef");
	a.print();
	HasPtr b = HasPtr("sdfsdfsdfs");
	vector<HasPtr> v{a,b};
	v.emplace_back("fffff");
	v.emplace_back("z");
	v.emplace_back("a");
	for(auto &p:v)
		p.print();
	cout<<endl;
	std::sort(v.begin(),v.end());
	for(auto &p:v)
		p.print();
}

