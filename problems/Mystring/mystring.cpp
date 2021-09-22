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
    /**this = *this + str;
    return *this;*/
    mystring st;
    unsigned i;
    if (m_len == 0 && str.m_len == 0)
    {
    st.m_len = 0;
    st.m_str = NULL;
    }
    else
    {
    st.m_len = m_len + str.m_len;
    st.m_str = new char[st.m_len];
    for (i = 0 ; i < m_len ; i++)st.m_str[i] = m_str[i];
    unsigned j = 0;
    while (j < str.m_len)
	{
	st.m_str[i] = str.m_str[j];
	i++;
	j++;
	}
    }
    //clear();
    m_str=new char[st.m_len];
    m_len=st.m_len;
    for (i = 0 ; i < m_len ; i++)m_str[i] = st.m_str[i];
    return *this;
}

mystring& mystring :: operator+=(const char* c){
    /**this = *this + mystring(c);
    return *this;*/
    mystring st;
	unsigned len=0;
	unsigned i;
	while(c[len]!='\0')
	{
	len++;
	}
	if (m_len == 0 && len == 0)
	{
	st.m_len = 0;
	st.m_str = NULL;
	}
	else
	{
	st.m_len = m_len + len;
    st.m_str = new char[st.m_len];
    for (i = 0 ; i < m_len ; i++)st.m_str[i] = m_str[i];
    unsigned j = 0;
    while (j < len)
	{
	 st.m_str[i] = c[j];
	 i++;
	 j++;
	}
	}
	//clear();
	m_len=st.m_len;
    m_str=new char[st.m_len];
    for (i = 0 ; i < m_len ; i++)m_str[i] = st.m_str[i];
    return *this;
}

mystring :: ~mystring(){
    delete[] m_str;
}
