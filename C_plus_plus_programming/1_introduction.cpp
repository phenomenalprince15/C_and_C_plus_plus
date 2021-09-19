/*
C++ is a general purpose programming language, derived from C langauge.
cout is the stream object used to perform output on the standard output device which is usually the display screen.
cout is used in combination with the insertion operator <<.
The <iostream> header defines the standard stream objects that input and output data.

A namespace is a declarative region that provides a scope to the identifiers (names of elements) inside it.
std -> standard library in c++

data types same as c.
* auto keyword
- The auto keyword allows you to automatically deduct the type of the variable being declared.
- It infers the data type of the variable from its value.
- Any variable declared with the auto keyword should be initialized at the time of its declaration or there will be an error.
*/
#include <iostream>

int hello()
{
    return 10;
}

int main()
{
    std:: cout << "Hello !" << std:: endl;
    int x = 03;
    std:: cout << x << " " << hello() << std:: endl;

    return 0;
}