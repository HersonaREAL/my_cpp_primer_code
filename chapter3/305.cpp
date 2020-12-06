#include<iostream>
using std::cin;
using std::cout;
using std::string;
using std::endl;

int main(){
	string fina,tmp;
	while(cin >> tmp)
		fina+=tmp;
	cout<<fina<<endl;
	return 0;
}
