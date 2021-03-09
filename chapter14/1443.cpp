#include <functional>
#include<iostream>
#include <fstream>
#include<vector>
#include <algorithm>
#include<functional>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
using namespace std::placeholders;
int main(){
	std::modulus<int> mod;
	std::equal_to<int> eq;
	vector<int> v = {2,4,6,8,10,12};
	int modnum;
	cin>>modnum;
	auto fm = std::bind(mod,_1,modnum);
	auto fq = std::bind(eq,_1,0);
	auto f = [fm,fq](int x){ return fq(fm(x)); };
	auto it = std::find_if_not(v.begin(),v.end(),f);
	if(it==v.end())
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;


}
