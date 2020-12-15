#include<iostream>
#include <istream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
std::istream &rrrrread(std::istream &is){
	char ch;
	while(is>>ch)
		cout<<ch;

	cout<<endl<<is.rdstate()<<endl;

	is.clear();
	return is;
}
int main(){
	cout<<cin.rdstate()<<endl;	
	cout<<rrrrread(cin).rdstate();

	if(cin.good()){
		cout<<"\ncin is good!\n";
	}
}
