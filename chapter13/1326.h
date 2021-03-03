#include <initializer_list>
#include <stdexcept>
#include <string>
#include <vector>
#include <memory>

#ifndef strBlob
#define strBlob

class StrBlob{
public:
	typedef std::vector<std::string>::size_type size_type;
	StrBlob();
	StrBlob(std::initializer_list<std::string> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }

	//add&delete
	void push_back(const std::string &t){ data->push_back(t); }
	void pop_back();

	//access
	std::string& front() const;
	std::string& back() const;
private:
	std::shared_ptr<std::vector<std::string>> data;
	void check(size_type i,const std::string &msg) const;
};

inline void StrBlob::pop_back(){
	check(0,"pop_back on empty StrBlob");
	data->pop_back();
}
inline std::string& StrBlob::front() const{
	check(0, "front on empty StrBlob");
	return data->front();
}
inline std::string& StrBlob::back() const{
	check(0,"back on empty StrBlob");
	return data->back();
}
inline void StrBlob::check(size_type i ,const std::string &msg) const{
	if(i>=data->size())
		throw std::out_of_range(msg);
}
#endif
