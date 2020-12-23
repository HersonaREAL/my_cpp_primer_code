#include<iostream>
#include <fstream>
#include<vector>
#include <numeric>
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
	vector<int> nums{1,2,3,43,4,5,6,6,4,2,2,23,2,3,3,3,23,23,3,1};
	int sum = std::accumulate(nums.begin(),nums.end(),0);
	for(auto i :nums)
		cout<<i<<" + ";
	cout<<" = "<<sum<<endl;
}
