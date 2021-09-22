#ifndef __MYSTRING_H_
#define __MYSTRING_H_

#include <cstdlib>
#include "string.h"
class mystring
{
private:
    /* data */
    char* m_str;
    size_t m_len;

public:
    mystring(/* args */);
    mystring(const char*);
    mystring(const mystring&);
    char* get_str();
    size_t get_len();
    mystring operator+(const mystring &ref);
    mystring& operator=(const mystring &ref);
    int operator==(const mystring&);
    bool operator<(const mystring&);
    bool operator>(const mystring&);
    mystring& operator+=(const mystring& ref);
    mystring& operator+=(const char*);

    ~mystring();
};

#endif //__MYSTRING_H_