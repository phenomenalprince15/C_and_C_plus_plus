/*
    Implement you code in this file and upload only this file to submitty
*/
#include <iostream>
#include <cstring>
#include "mystring.h"

mystring :: mystring(){
    m_str = 0;
    m_len = 0;
}
mystring :: mystring(const char* ref){
    m_len = strlen(ref);
    m_str = new char[m_len + 1];
    strcpy(m_str, ref);
}

mystring :: mystring(const mystring& ref){
    m_len = ref.m_len;
    m_str = new char[m_len + 1];
    strcpy(m_str, ref.m_str);
}

char* mystring :: get_str(){
    return m_str;
}

size_t mystring :: get_len(){
    //return m_len;
    if(m_str)
        return strlen(m_str);
    return 0;
}

mystring mystring :: operator+(const mystring& str){
    int temp = m_len + str.m_len + 1;
    char* ptr = new char[temp];
    strcpy(ptr,m_str);
    strcat(ptr,str.m_str);
    mystring s(ptr);
    delete[] ptr;
    return s;
}

mystring& mystring :: operator=(const mystring& str){
    if(str.m_str == 0){
        delete[] m_str;
        m_str = 0;
        m_len = 0;
        return *this;
    }
    if(this != &str){
        delete[] m_str;
        m_str = new char[str.m_len + 1];
        strcpy(m_str, str.m_str);
        m_len = str.m_len;
    }
    return *this;
}

int mystring :: operator==(const mystring& str){
    int cmp = strcmp(m_str, str.m_str);
    return cmp;
    /*if (strcmp(m_str, str.m_str) == 0){
        return 1;
    }
    return 0;*/
}

bool mystring :: operator<(const mystring& str){
    return strcmp(m_str, str.m_str) < 0;
}

bool mystring :: operator>(const mystring& str){
    return strcmp(m_str, str.m_str) > 0;
}

mystring& mystring :: operator+=(const mystring& str){
    *this = *this + str;
    return *this;
}

mystring& mystring :: operator+=(const char* c){
    *this = *this + mystring(c);
    return *this;
}

mystring :: ~mystring(){
    delete[] m_str;
}
