#include<iostream>
#include <fstream>
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
	vector<int> a = {1,2,3,4,5,6,7,8};
	vector<int> b = {1,2,3,6};
	vector<int> c = {1,2,3,6};
	cout<<(a>b)<<endl;
	cout<<(a==b)<<endl;
}
