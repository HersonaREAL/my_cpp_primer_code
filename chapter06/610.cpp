#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void swap(int* a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int x,y;
	cout<<"x:";
	cin>>x;
	cout<<"y:";
	cin>>y;
	cout<<"x:"<<x<<" y:"<<y<<endl;
	swap(&x,&y);
	cout<<"swap"<<endl<<"x:"<<x<<" y:"<<y<<endl;
}
