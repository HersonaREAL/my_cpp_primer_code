#include<iostream>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	string test;
	cin >> test ;
	cout<< test<<endl;
	string newS;
	for(auto &tmp : test){
		if(!ispunct(tmp))
			newS+=tmp;
	}
	cout << newS << endl;
}
