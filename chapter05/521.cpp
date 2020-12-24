#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	string pre,tmp;
	bool isSame = false;
	while(cin>>tmp){
		if(tmp == pre){
			if(!isupper(tmp[0]))
				continue;
			isSame = true;
			break;
		}
		pre = tmp;
	}
	if(isSame)
		cout<<"Same word : "<<tmp<<endl;
	else
		cout<<"There is not same world"<<endl;
	return 0;
}
