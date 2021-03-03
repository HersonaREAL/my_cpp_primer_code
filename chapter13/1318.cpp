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
class Employee{
public:
	Employee():name(string()),ID(unique++){}
	Employee(const string &s):name(s),ID(unique++){}


private:
	static int unique;
	string name;
	int ID;
};
int Employee::unique = 0;
int main(){
	
}
