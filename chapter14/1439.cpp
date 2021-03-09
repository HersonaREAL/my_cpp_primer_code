#include <bits/c++config.h>
#include<iostream>
#include <fstream>
#include<vector>
#include <algorithm>
#include<unordered_map>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
class checkSize{
public:
	checkSize(std::size_t size):sz(size){}
	bool operator()(const string &s){ return s.size()==sz;}
private:
	std::size_t sz;
};
int check(const vector<string> &s, checkSize &ck){
	int count = 0;
	for(auto &str:s)
		if(ck(str))
			++count;
	return count;
}
int main(){
	vector<string> s = {"t","fff","sss","ff","sdffffd","fffffffffffffffffffffffffffffff","fffffffffffffffffffffffffffss"};
	int sum = 0;
	for(int i = 1;i<=9;++i){
		checkSize ck(i);
		int cnt = check(s,ck);
		sum+=cnt;
		cout<<"length="<<i<<":"<<cnt<<endl;
	}
	cout<<"length>10:"<<s.size()-sum<<endl;
}
