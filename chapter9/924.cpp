#include<iostream>
#include <fstream>
#include <ostream>
#include<vector>
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
	vector<int> test;
	cout<<test.at(0)<<endl;
	cout<<test[0]<<endl;
	cout<<*(test.begin())<<endl;
	cout<<test.front()<<endl;
}
