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

int main(int argc,char*argv[]){
	if(argc<4){
		cout<<"proc <file> <file> <file>"<<endl;
		exit(1);
	}
	std::ifstream ifs(argv[1]);
	std::ofstream ofs1(argv[2]),ofs2(argv[3]);
	if(ifs.fail()||ofs1.fail()||ofs2.fail()){
		cout<<"open file fail"<<endl;
		exit(1);
	}
	std::istream_iterator<int> ifs_it(ifs),ifs_eof;
	std::ostream_iterator<int> ofs1_it(ofs1," "),ofs2_it(ofs2," ");
	vector<int> num(ifs_it,ifs_eof);
	for(auto i :num){
		if(i&0x1)
			ofs1_it = i;
		else
			ofs2_it = i;
	}
	
}
