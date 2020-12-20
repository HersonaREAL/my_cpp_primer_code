#include<iostream>
#include <fstream>
#include<vector>
#include<cctype>
#include<stdexcept>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;
using std::vector;

int main(int argc,char *argv[]){
	if(argc<2){
		std::cerr<<"prog <file>"<<endl;
		exit(1);
	}
	std::fstream ifs(argv[1]);
	if(ifs.fail()){
		std::cerr<<"file error"<<endl;
		exit(1);
	}
	string s,longest;
	ifs>>s;
	string both_not("aceimnorsuvwxz");
	string::size_type start = 0,end = 0;
	//先找第一个非出头和非下出头，从找到的位置开始找出头或出头，分别用start和end存起来
	while((start = s.find_first_of(both_not,start))!=string::npos){
		end = s.find_first_not_of(both_not,start);
		if(end!=string::npos){
			if((end-start)>longest.size())
				longest.assign(s,start,end-start);
		}else if(end==string::npos){
			//如果end到尾，说明剩下的全是非出头和非下出头，直接从start到末尾比较
			if((s.size()-start)>longest.size())
				longest.assign(s,start,s.size());
		}
		start = end;
	}
	cout<<s<<endl;
	cout<<longest<<endl;

}
