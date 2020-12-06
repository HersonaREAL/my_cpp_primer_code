#include<iostream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	int a,b;
	
	while(cin>>a>>b){
		try{
			if(!b)
				throw std::runtime_error("被除数错误！\n");
			cout<<a/b<<endl;
		}catch(std::runtime_error err){
			string jdg;
			cout<<err.what()<<endl;
			cout<<"continue?(y/n):";
			cin>>jdg;
			if(jdg[0]=='n')
				break;
		}
	}
	
	
}
