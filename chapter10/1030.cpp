#include<iostream>
#include <algorithm>
#include <iterator>
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
	std::istream_iterator<int> is_it(cin),eof;
	std::ostream_iterator<int> os_it(cout," ");
	vector<int> num(is_it,eof);
	std::sort(num.begin(),num.end());
	std::copy(num.cbegin(),num.cend(),os_it);
}
