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
	int test = 10;
	//auto f = [test]() mutable ->bool{
	auto f = [&test]()->bool{
		if(test==0)
			return true;
		--test;
		return false;
	};
	while(!f())
		cout<<"test:"<<test<<endl;
		//cout<<"test is not equals 0"<<endl;
	return 0;
}
