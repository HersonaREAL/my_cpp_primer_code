#include<iostream>
#include <fstream>
#include<vector>
#include<cctype>
#include<stdexcept>
#include "951.h"
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;

int main(){
	string date;
	cout<<"input date:";
	getline(cin,date);
	myDate test(date);
	test.print();
}
