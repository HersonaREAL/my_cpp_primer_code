#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	/*int a[5],b[5];
	for(int i = 0;i<5;i++)
		cin>>a[i];
	for(int i=0;i<5;i++)
		cin>>b[i];
	auto abeg = std::begin(a),bbeg = std::begin(b);
	auto aend = std::end(a),bend = std::end(b);
	if((abeg-aend)!=(bbeg-bend)){
		cout<<"数组ab不相等呢"<<endl;
		return 0;
	}	
	while(abeg!=aend&&bbeg!=bend){
		if(*abeg!=*bbeg){
			cout<<"数组ab不相等呢"<<endl;
			return 0;
		}
		abeg++,bbeg++;
	}
	cout<<"数组ab相等的呢"<<endl;
	return 0;*/
	vector<int> a,b;
	int get;
	int num;
	cin>>num;
	for(int i=0 ;i<num;i++){
		cin>>get;
		a.push_back(get);
	}
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>get;
		b.push_back(get);
	}
	if(a!=b){
		cout<<"ab容器不相等呢"<<endl;
		return 0;
	}
	cout<<"ab容器相等呢"<<endl;
	return 0;
}
