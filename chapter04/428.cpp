#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	cout<<"char:"<<sizeof(char)<<endl;
	cout<<"int:"<<sizeof(int)<<endl;
	cout<<"short:"<<sizeof(short)<<endl;
	cout<<"short int:"<<sizeof(short int)<<endl;
	cout<<"float:"<<sizeof(float)<<endl;
	cout<<"double:"<<sizeof(double)<<endl;
	cout<<"long double:"<<sizeof(long double)<<endl;
	cout<<"wchar_t:"<<sizeof(wchar_t)<<endl;
	cout<<"char16_t:"<<sizeof(char16_t)<<endl;
	cout<<"char32_t:"<<sizeof(char32_t)<<endl;
	cout<<"bool:"<<sizeof(bool)<<endl;
	
	cout<<"long:"<<sizeof(long)<<endl;
	cout<<"long long:"<<sizeof(long long)<<endl;
	cout<<"char *:"<<sizeof(char *)<<endl;
	cout<<"int *:"<<sizeof(int *)<<endl;
	cout<<"long *:"<<sizeof(long *)<<endl;
	cout<<"long long *:"<<sizeof(long long *)<<endl;
		
}
