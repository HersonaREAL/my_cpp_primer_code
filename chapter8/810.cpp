#include <cstdio>
#include<iostream>
#include <fstream>
#include<sstream>
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

int main(int argc,char *argv[]){
	ifstream ifs(argv[1]);
	vector<string> line;
	string oneline;
	if(ifs.fail()){
		std::cerr<<"open file fail"<<endl;
		exit(1);
	}
	while(getline(ifs,oneline))	
		line.push_back(oneline);
	string readword;
	for(auto i = 0;i!=line.size();++i){
		std::istringstream ist(line[i]);
		while(ist>>readword)
			cout<<readword<<" ";
	}	
	return 0;	
}
