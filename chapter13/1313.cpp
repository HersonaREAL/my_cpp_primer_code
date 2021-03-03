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
class cc{
public:
	cc(){cout<<"c()"<<endl;}
	cc(const cc &src){cout<<"cc(const cc &src)"<<endl;}
	~cc(){cout<<"~cc()"<<endl;}
};
vector<cc> test(const cc &a){
	cc b(a);
	vector<cc> v;
	v.push_back(a);
	v.emplace_back(b);
	return v;
}
int main(){
	cc g;
	auto c = test(g);	
	c.push_back(g);
}

