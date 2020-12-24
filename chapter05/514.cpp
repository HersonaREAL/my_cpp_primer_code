#include<iostream>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
	vector<string> input;
	string tmp;
	while(cin>>tmp)
		input.push_back(tmp);
	for(const auto out : input)
		cout<<out<<" ";
	cout<<endl;

	string same;
	unsigned count = 0;
	auto beg = input.begin();
	while((beg+1)!=input.end()&&(*beg)!=*(beg+1))
		++beg;
	if((beg+1)==input.end())
		cout<<"There is not same string."<<endl;
	else{
		same = *beg;
		while(beg+1!=input.end()&&(*beg==*(beg+1))){
			++count;
			++beg;
		}
		++count;
	cout<<"There is same string :"<<same<<",appear "<<count<<" times"<<endl;
	}

}
