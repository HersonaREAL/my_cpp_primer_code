#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	vector<string> text;
	text.push_back("alsdfjls;dfjl;sdfjlsdflsdf");
	text.push_back("\n呵呵呵test");
	text.push_back("");
	text.push_back("dfldsjfldsjfldsjlfdjfdjfsdhhgsddf;j");
	for(auto it = text.begin();it!=text.end()&&!it->empty();++it)
		for(auto Sit = it->begin(); Sit!=it->end();++Sit)
			*Sit = toupper(*Sit);
	for(auto it = text.cbegin();it!=text.cend();++it)
		cout<< *it ;
	cout<<endl;	
}
