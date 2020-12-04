#include<iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
	string test = "abcdlsdfjlsdfjljflsdjfl;sdfjl;sdjfsdfjfsdlsdfjs";
	cout<< test << endl;
	for(auto &tmp : test){
		tmp = 'X';
	}
	cout << test << endl;
}
