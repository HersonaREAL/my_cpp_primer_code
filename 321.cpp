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
	for(auto it = v1.cbegin();it!=v1.cend();++it)
		cout<< *it <<" ";
	cout<<"size of v2:"<<v2.size()<<endl;
	for(auto it = v2.cbegin();it!=v2.cend();++it)
		cout<< *it <<" ";
	cout<<endl<<"size of v3:"<<v3.size()<<endl;
	for(auto it = v3.cbegin();it!=v3.cend();++it)
		cout<< *it <<" ";
	cout<<endl<<"size of v4:"<<v4.size()<<endl;
	for(auto it = v4.cbegin();it!=v4.cend();++it)
		cout<< *it <<" ";
        cout<<endl<<"size of v5:"<<v5.size()<<endl;
	for(auto it = v5.cbegin();it!=v5.cend();++it)
		cout<< *it <<" ";
        cout<<endl<<"size of v6:"<<v6.size()<<endl;
	for(auto it = v6.cbegin();it!=v6.cend();++it)
		cout<< *it<<" ";
	cout<<endl<<"size of v7:"<<v7.size()<<endl;
	for(auto it = v7.cbegin();it!=v7.cend();++it)
		cout<< *it <<" ";
	cout<<endl;
}
