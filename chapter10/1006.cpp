#include<iostream>
#include <fstream>
#include <iterator>
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
	vector<int> a{1,2,2,3,3,4,4,5,4,5,6,5,6,7,4,2,2,3,3,1,2,2,2,1};
	for(auto i : a)
		cout<<i<<" ";
	std::fill_n(a.begin(),a.size() , 0);
	cout<<endl;
	for(auto i : a)
		cout<<i<<" ";
	cout<<endl;
	
}
