/*
Pointers are especially useful with arrays. An array declaration reserves a block of contiguous memory addresses for its elements. With pointers, we can point to the first element and then use address arithmetic to traverse the array:
+ is used to move forward to a memory location
- is used to move backward to a memory location

You can also use the ==, <, and > operators to compare pointer addresses.

Pointers greatly expand the possibilities for functions. No longer are we limited to returning one value. With pointer parameters, your functions can alter actual data rather than a copy of data.
To change the actual values of variables, the calling statement passes addresses to pointer parameters in a function.

*/

#include <stdio.h>

int main()
{
    int a[5] = {100,200,300,400,500};
    int *ptr = a; // ptr = &a[0];
    for (int i=0;i<5;i++)
    {
        printf("%d\t",*(ptr+i));
    }
}