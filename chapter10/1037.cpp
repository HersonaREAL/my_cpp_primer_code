#include<iostream>
#include <iterator>
#include <list>
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

int main(){
	vector<int> nums{1,2,3,4,5,6,7,8,9,10};
	std::list<int> dst;
	auto back_it =  std::back_inserter(dst);
	std::copy(nums.crbegin()+3,nums.crbegin()+8,back_it);
	for(auto i :nums)
		cout<<i<<" ";
	cout<<endl;
	for(auto i :dst)
		cout<<i<<" ";
	cout<<endl;
}
