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
	std::list<int> lst{1,2,3,4,5,5,6,7,0,8,6,1};
	auto findlast = std::find(lst.rbegin(),lst.rend(),0);
	for(auto i : lst)
		cout<<i<<" ";
	cout<<endl;
	while(findlast!=lst.rend())
		cout<<*findlast++<<" ";
	cout<<endl;
	
}
