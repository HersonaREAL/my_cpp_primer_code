#include <cstddef>
#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
string make_plural(size_t ctr,const string &word ,const string &ending = "s"){
	return (ctr>1)?word + ending : word;		
}
int main(){
	cout<<make_plural(1, "failure")<<" "<<make_plural(1,"success")<<endl;
	cout<<make_plural(2, "failure")<<" "<<make_plural(2,"success","es")<<endl;	
}
