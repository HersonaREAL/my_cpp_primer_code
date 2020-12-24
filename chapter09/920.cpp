#include<iostream>
#include <fstream>
#include<vector>
#include <list>
#include <deque>
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
	std::list<int> num;
	std::deque<int> ou,ji;	
	for(int a;cin>>a;num.push_back(a));
	for(auto i : num)
		if(i%2==0)
			ou.push_back(i);
		else
			ji.emplace_front(i);
	for(auto i = 0;i!=ou.size();++i)
		cout<<ou[i]<<" ";
	cout<<endl;
	for(auto ptr = ji.begin();ptr!=ji.end();++ptr)
		cout<<*ptr<<" ";
	cout<<endl;
	return 0;
		
}
