#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc,char *argv[]){
	string all;
	for(int i =1;i<argc;++i)
		all+=argv[i]+string(" ");
	cout<<all<<endl;
	
}
