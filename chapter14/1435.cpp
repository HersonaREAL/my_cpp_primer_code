#include<iostream>
#include <fstream>
#include <istream>
#include<vector>
#include <algorithm>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ostream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
class inputStr{
public:
	inputStr(std::istream &i = cin):is(i){}
	string operator()(){
		string s;
		getline(is,s);
		return s;
	}

private:
	std::istream &is;

};
int main(){
	inputStr cinIn(cin);
	while(true){
		cout<<cinIn()<<endl;
	}
}

