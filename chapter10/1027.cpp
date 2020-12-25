#include<iostream>
#include <fstream>
#include <iterator>
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
	vector<int> src{1,1,1,1,2,2,3,2,2,4,4,5,6,7,8,9,10,123,4342,21,21,333};
	std::list<int> des;
	auto it_back = std::back_inserter(des);
	std::unique_copy(src.cbegin(),src.cend(),it_back);
	for(auto i :src)
		cout<<i<<" ";
	cout<<endl;
	for(auto i:des)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}
