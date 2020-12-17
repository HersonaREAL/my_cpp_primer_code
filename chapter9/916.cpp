#include<iostream>
#include <fstream>
#include<vector>
#include<list>
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
	std::list<int> b = {1,2,3,4,5,6,7,8};
	cout<<(vector<int>(b.begin(),b.end())==a)<<endl;

}
