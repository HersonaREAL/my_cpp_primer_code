#include<iostream>
#include"1515.h"
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
	Quote a("dokidoki",100);
	Bulk_quote b("dokidoki2",100,10,0.8);
	print_total(cout,a,2);
	print_total(cout,b,8);	
	a.debug();
	cout<<endl;
	b.debug();
}
