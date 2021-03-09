#include"1426.h"
#include<algorithm>
using std::string;

std::allocator<string> StrVec::alloc;

StrVec::StrVec(const StrVec& src){
    auto newdata = alloc_n_copy(src.begin(), src.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}
StrVec& StrVec::operator=(const StrVec &src){
    auto data = alloc_n_copy(src.begin(), src.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}
StrVec::StrVec(std::initializer_list<string> il):
    elements(nullptr),first_free(nullptr),cap(nullptr){
    for (auto it = il.begin(); it != il.end();++it)
        push_back(*it);
}
StrVec::~StrVec(){
    free();
}

std::pair<string *,string*> StrVec::alloc_n_copy(const string *b,const string *e){
    auto data = alloc.allocate(e - b);
    return {data, std::uninitialized_copy(b, e, data)};
}
void StrVec::free(){
    if(elements){
        for (auto p = first_free; p != elements;)
            alloc.destroy(--p);
        alloc.deallocate(elements, cap - elements);
    }
}
void StrVec::reallocate(){
    auto newcapcity = size() ? 2 * size() : 1;
    auto newdata = alloc.allocate(newcapcity);
    auto dest = newdata;
    auto elem = elements;
    for (auto i = 0; i != size();++i)
        alloc.construct(dest++, std::move(*elem++));
    elements = newdata;
    first_free = dest;
    cap = elements + newcapcity;
}

void StrVec::push_back(const std::string &s){
    chk_n_alloc();
    alloc.construct(first_free++, s);
}

bool operator==(const StrVec &a,const StrVec &b){
    if(a.size()!=b.size())
        return false;
    for (auto ait = a.begin(), bit = b.begin(); ait != a.end() && bit != b.end();++ait,++bit)
        if(*ait!=*bit)
            return false;
    return true;
}

bool operator!=(const StrVec &a,const StrVec &b){
    return !(a == b);
}

StrVec &StrVec::operator=(std::initializer_list<string> il){
    auto newdata = alloc_n_copy(il.begin(), il.end());
    free();
    elements = newdata.first;
    first_free = cap = newdata.second;
    return *this;
}
StrVec &StrVec::operator+=(std::initializer_list<std::string> il){
    for (auto it = il.begin(); it != il.end();++it)
        push_back(*it);
    return *this;
}
