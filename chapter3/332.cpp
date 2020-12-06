#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	/*int a[10];
	int b[10];
	for(int i=0;i<10;i++)
		a[i] = i;
	for(int i=0;i<10;i++)
		b[i]=a[i];
	for(auto i:b)
		cout<< i <<" ";
	cout<<endl;*/
	vector<int> a(10);
	vector<int> b(10);
	for(int i = 0;i<10;i++)
		a[i]=i;
	b = a;
	for(auto i : b)
		cout<< i <<" ";
	cout<<endl;
}
