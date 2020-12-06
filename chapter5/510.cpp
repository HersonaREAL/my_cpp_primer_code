#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	char tmp;
	int aCnt = 0,eCnt = 0,iCnt = 0,oCnt = 0,uCnt = 0;
	while(cin>>tmp){
		switch(tmp){
			case 'a':case 'A':
				++aCnt;
				break;
			case 'e':case 'E':
				++eCnt;
				break;
			case 'i':case 'I':
				++iCnt;
				break;
			case 'o':case 'O':
				++oCnt;
				break;
			case 'u':case 'U':
				++uCnt;
				break;
			default:;

		}
	}
	cout<<"a_A:"<<aCnt<<endl;
	cout<<"e_E:"<<eCnt<<endl;
	cout<<"i_I:"<<iCnt<<endl;
	cout<<"o_O:"<<oCnt<<endl;
	cout<<"u_U:"<<uCnt<<endl;	
}
