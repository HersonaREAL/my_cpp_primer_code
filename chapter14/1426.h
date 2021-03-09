#include <bits/c++config.h>
#ifndef ccStrVec
#define ccStrVec
#include<string>
#include<memory>
class StrVec{
public:
	StrVec():elements(nullptr),first_free(nullptr),cap(nullptr){}
	StrVec(const StrVec&);
	StrVec(std::initializer_list<std::string>);
	StrVec &operator=(const StrVec &);
	~StrVec();
	void push_back(const std::string&);
	std::size_t size()const {return first_free - elements;}
	std::size_t capacity() const { return cap - elements; }
	std::string *begin()const { return elements;}
	std::string *end()const { return first_free;}
	StrVec &operator=(std::initializer_list<std::string>);
	StrVec &operator+=(std::initializer_list<std::string>);
	std::string &operator[](std::size_t n) { return elements[n]; }
	const std::string &operator[](std::size_t n) const{ return elements[n]; }
private:
	static std::allocator<std::string> alloc;
	void chk_n_alloc(){ if(size()==capacity()) reallocate();}
	std::pair<std::string *,std::string*> alloc_n_copy(const std::string*,const std::string *);
	void free();
	void reallocate();
	std::string *elements;
	std::string *first_free;
	std::string *cap;
};
bool operator==(const StrVec &a, const StrVec &b);
bool operator!=(const StrVec &a, const StrVec &b);
#endif
