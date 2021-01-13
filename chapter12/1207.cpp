#include<iostream>
#include <fstream>
#include<vector>
#include <algorithm>
#include<cctype>
#include<stdexcept>
#include <memory>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
using std::shared_ptr;
shared_ptr<vector<int>> getVectorPtr();
void input2vector(shared_ptr<vector<int>>);
void printVector(const shared_ptr<vector<int>>);
int main(){
	auto ptr = getVectorPtr();
	input2vector(ptr);
	printVector(ptr);
}
shared_ptr<vector<int>> getVectorPtr(){
	return std::make_shared<vector<int>>();
}
void input2vector(shared_ptr<vector<int>> ptr){
	int num;
	while(cin>>num)
		ptr->push_back(num);
}
void printVector(const shared_ptr<vector<int>> ptr){
	for(auto i : *ptr)
		cout<<i<<" ";
	cout<<endl;
}


