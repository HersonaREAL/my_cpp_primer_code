#include"1339.h"
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
