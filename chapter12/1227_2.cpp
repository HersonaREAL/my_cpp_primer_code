#include<iostream>
#include<fstream>
#include"1227.h"

using namespace std;

int main(int argc,char *argv[]){
	if(argc<2){
		cout<<"prog <file>"<<endl;
		return -1;
	}
	ifstream ifs(argv[1]);
	if(!ifs){
		cout<<"file open fail"<<endl;
		return -1;
	}
	string word;
	TextQuery tq(ifs);
	cout<<"find word:";
	cin>>word;
	print(cout,tq.Query(word));

}
