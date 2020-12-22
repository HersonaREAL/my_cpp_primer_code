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

int main(){
	vector<int> nums{1,1,1,1,2,3,3,3,4,5,5,6,6,7,7,78,78,7,7,7,7,7,7,7,8,8,8,8,35,2,424,2,4,4,3,43,4,34,2};
	for(int a :nums)
		cout<<a<<" ";
	cout<<endl;
	int val;
	cin>>val;
	cout<<val<<" appear "<<std::count(nums.begin(), nums.end(), val)<<" times"<<endl;
}
