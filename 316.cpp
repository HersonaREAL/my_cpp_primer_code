#include<iostream>
#include<vector>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{10};
	vector<int> v5{10,42};
	vector<string> v6{10};
	vector<string> v7{10,"hi"};

	cout<<"size of v1:"<<v1.size()<<endl;

	cout<<"size of v2:"<<v2.size()<<endl;
	for(auto v:v2)
		cout<<v<<" ";
	cout<<endl<<"size of v3:"<<v3.size()<<endl;
	for(auto v:v3)
		cout<<v<<" ";
	cout<<endl<<"size of v4:"<<v4.size()<<endl;
	for(auto v:v4)
		cout<<v<<" ";
        cout<<endl<<"size of v5:"<<v5.size()<<endl;
	for(auto v:v5)
		cout<<v<<" ";
        cout<<endl<<"size of v6:"<<v6.size()<<endl;
	for(auto v:v6)
		cout<<v<<" ";
	cout<<endl<<"size of v7:"<<v7.size()<<endl;
	for(auto v:v7)
		cout<<v<<" ";
	cout<<endl;
}
