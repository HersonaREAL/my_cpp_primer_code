#include<iostream>
#include <fstream>
#include<vector>
#include <algorithm>
#include<memory>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::allocator;
using std::vector;

int main(){
	int n = 2;
	allocator<string> alloc;
	auto const p = alloc.allocate(n);		
	string s;
	string *q = p;
	while(cin>>s&&q!=p+n)
		*q++ = s;
	const size_t size = q - p;
	while(q!=p)
		alloc.destroy(--q);
	alloc.deallocate(p,n);
}

