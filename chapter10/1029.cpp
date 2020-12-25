#include<iostream>
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

int main(int argc,char *argv[]){
	if(argc<2){
		cout<<"proc <file>"<<endl;
		exit(1);
	}
	std::ifstream ifs(argv[1]);
	if(ifs.fail()){
		cout<<"open file fail"<<endl;
		exit(1);
	}
	std::istream_iterator<string> ifs_it(ifs),eof;
	vector<string> text(ifs_it,eof);
	std::copy(text.cbegin(),text.cend(),std::ostream_iterator<string>(cout,"\n"));
}
