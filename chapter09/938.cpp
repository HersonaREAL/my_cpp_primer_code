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

int main(){
	vector<int> testGrow;
	for(int i = 0;i<258;++i){
		testGrow.push_back(i);
		cout<<i<<": now size:"<<testGrow.size()<<"   now capacity:"<<testGrow.capacity()<<endl;
	}	
	for(int i = 0;i<258;++i){
		testGrow.pop_back();
		cout<<i<<": now size:"<<testGrow.size()<<"   now capacity:"<<testGrow.capacity()<<endl;
	}	
}
