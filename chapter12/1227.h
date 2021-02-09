#ifndef query
#define query
#include<iostream>
#include <istream>
#include <ostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<set>
#include<memory>
class QueryResult;
class TextQuery{
	using text_type = std::vector<std::string>;
	using wm_type = std::unordered_map<std::string,std::shared_ptr<std::set<int>>>;
	std::shared_ptr<text_type> text;
	wm_type wordMap;
public:
	TextQuery(std::istream &is);
	QueryResult Query(const std::string &word) const;
};

class QueryResult{
	std::string targetWord;
	std::shared_ptr<std::set<int>> resSet;
	std::shared_ptr<std::vector<std::string>> text;
public:
	friend std::ostream& print(std::ostream &os,const QueryResult &res);
	QueryResult(const std::string &word,std::shared_ptr<std::set<int>> setPtr,std::shared_ptr<std::vector<std::string>> textPtr):targetWord(word),resSet(setPtr),text(textPtr){}
};
#endif
