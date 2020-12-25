#include<iostream>
#include <fstream>
#include<vector>
#include <list>
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
	std::vector<int> a{2,3,4,1,2,3,45,7,8,6,4,4,65,7,7,4,4};
	std::sort(a.begin(),a.end());
	for(auto i :a)
		cout<<i<<" ";
	cout<<endl;
}
