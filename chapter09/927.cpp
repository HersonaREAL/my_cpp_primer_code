#include<iostream>
#include <fstream>
#include<vector>
#include <forward_list>
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
	std::forward_list<int> num{1,2,3,4,5,6,7,8,9,10};
	for(auto i :num)
		cout<<i<<" ";
	cout<<endl;
	auto pre = num.before_begin();
	auto cur = num.begin();
	while(cur!=num.end()){
		if(*cur%2){
			pre = cur;
			++cur;
		}else
			cur = num.erase_after(pre);
	}
	for(auto i : num)
		cout<<i<<" ";
	cout<<endl;
}
