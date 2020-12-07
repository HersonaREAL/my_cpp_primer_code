#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
#include"Chapter6.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

long long fact(int x){
	long long ret = 1;
	while(x>1)
		ret*=(x--);
	return ret;
}
