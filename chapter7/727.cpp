#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
#include"ccScreen.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	Screen myScreen(5,5,'X');
	myScreen.move(4,0).set('#').display(cout);
	cout<<"\n";
	myScreen.display(cout);
	cout<<"\n";
	return 0;	
}
