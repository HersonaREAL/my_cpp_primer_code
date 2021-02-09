#include"1227.h"
#include<sstream>
#include <vector>
#include<memory>
using namespace std;

TextQuery::TextQuery(istream &is){
	std::vector<int>::size_type line_no = 0;
	string line;
	text.reset(new vector<string>);
	while(getline(is,line)){
		text->push_back(line);
		istringstream iss(line);	
		string word;
		while(iss>>word){
			auto &setPtr = wordMap[word];
			if(!setPtr) setPtr.reset(new set<int>);
			setPtr->insert(line_no);
		}
		++line_no;
	}
}
QueryResult TextQuery::Query(const string &word) const{
	static shared_ptr<set<int>> nodata(new set<int>);
	auto Ptr = wordMap.find(word);
	if(Ptr!=wordMap.end()){
		return QueryResult(word,Ptr->second,text);
	}else{
		return QueryResult(word,nodata,text);
	}
}
std::ostream& print(std::ostream &os,const QueryResult &res){
	os<<res.targetWord<<" occurs "<<res.resSet->size()<<" "<<endl;
	for(auto num:*res.resSet)
		os<<"\t(line "<< num+1 <<")" << *(res.text->begin()+num)<<endl;
	return os;
}
