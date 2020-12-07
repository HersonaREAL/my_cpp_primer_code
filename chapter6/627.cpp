#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int sum(std::initializer_list<int> numlist){
	int sum = 0;
	for(auto beg = numlist.begin();beg!=numlist.end();++beg)
		sum += *beg;
	return sum;
}
int main(){
	cout<<sum({1,2,3,4,5,6,7,8,9,10})<<endl;
}
