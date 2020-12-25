#include<iostream>
#include <fstream>
#include <iterator>
#include<vector>
#include <deque>
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
	vector<int> src{1,2,3,4,5,6,7,8,9};
	std::deque<int> back_dst,front_dst,insert_dst;
	auto back_ins = std::back_inserter(back_dst);
	auto front_ins = std::front_inserter(front_dst);
	auto insert_ins = std::inserter(insert_dst,insert_dst.begin());
	std::copy(src.cbegin(),src.cend(),back_ins);
	std::copy(src.cbegin(),src.cend(),front_ins);
	std::copy(src.cbegin(),src.cend(),insert_ins);
	auto print = [](const std::deque<int> &v){
		for(auto i:v)
			cout<<i<<" ";
		cout<<endl;
	};
	cout<<"origin:";
	for(auto i :src)
		cout<<i<<" ";
	cout<<endl;
	cout<<"back_insert:";
	print(back_dst);
	cout<<"front_insert:";
	print(front_dst);
	cout<<"insert:";
	print(insert_dst);
}
