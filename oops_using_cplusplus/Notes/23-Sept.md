# Essentials of C++

## Additions to C++ from C
* Bjarne Stroustrap  - C with objects
* Data types - bool
* size of character
    * sizeof('a')  --> 4 Bytes  --> C
    * sizeof('a')  --> 1 Bytes  --> C++
* Reference
    * 
* Source code file name extention
    * .cpp
    * .cc
    * .cxx
* Dynamic memory
    * In C  - malloc, calloc, realloc
        * retunring void*
        * fails - NULL
        * free - deallocate
    * In C++
        * allocation - new operator
            * type specific
            * fails - exception
            * instatiate ctor
        * Dealocation - delete operator


struct name{
    int var1;
    float var2;
    char c1;
};

struct name n1;

union name_union{
    int var1;
    float var2;
    char var3;

}

name_union u1;
class class_name{
    int var1;
    float var2; //data members

    fn1(){  // member functions

    }
    fn2();
};

class_name cn1, cn2, cn3; // object

cn1 + cn2;


class name1{
    virtual f1(){

    }
}

class name2: public name1{
    f1(){   / fn overriding

    }
}

name1* ptr ;
name2 n2;

ptr = &n2;

ptr->f1();

C++99
C++11
C++17