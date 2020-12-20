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
	vector<string> num{"1.1","2.2","3","4","5","101"};
	//int sum = 0;
	double sum = 0;
	for(const string &s:num){
		cout<<s<<" ";
		//sum+=stoi(s);
		sum+=stod(s);
	}
	cout<<"sum:"<<sum<<endl;
	
}
