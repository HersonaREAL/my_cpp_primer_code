#include<iostream>
#include <istream>
#include <sstream>
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
	is.clear();
	return is;
}
int main(){
	std::istringstream ist("呃呃呃呃呃呃呃呃呃呃呃呃呃呃呃呃呃呃呃烦烦烦烦烦烦烦烦烦\n");
	
	rrrrread(ist);

}
