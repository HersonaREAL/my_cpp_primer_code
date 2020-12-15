#include <cstdio>
#include<iostream>
#include <fstream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;
vector<string> file2vector(string file_name){
	ifstream in(file_name);
	vector<string> file_context;
	if(!in){
		std::cerr<<"open fail fail<<endl";
		return file_context;
	}
	string oneline;
	while(getline(in,oneline)){
		file_context.push_back(oneline);
	}
	return file_context;
}
int main(int argc,char *argv[]){
	if(argc<2){
		std::cerr<<"prog <filename>\nyou input nothing,read your ass?"<<endl;
		exit(1);
	}
	vector<string> file_context = file2vector(argv[1]);
	for(const string &s:file_context)
		cout<<s<<endl;
	cout<<endl;
	return 0;
}
