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
	int aCnt = 0,eCnt = 0,iCnt = 0,oCnt = 0,uCnt = 0,tabCnt = 0,spCnt = 0,nCnt = 0;
	while(cin>>std::noskipws>>tmp){
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
			case ' ':
				++spCnt;
				break;
			case '\t':
				++tabCnt;
				break;
			case '\n':
				++nCnt;
				break;

			default:;

		}
	}
	cout<<"a_A:"<<aCnt<<endl;
	cout<<"e_E:"<<eCnt<<endl;
	cout<<"i_I:"<<iCnt<<endl;
	cout<<"o_O:"<<oCnt<<endl;
	cout<<"u_U:"<<uCnt<<endl;
	cout<<"spcae:"<<spCnt<<endl;
	cout<<"TAB:"<<tabCnt<<endl;
	cout<<"换行:"<<nCnt<<endl;	
}
