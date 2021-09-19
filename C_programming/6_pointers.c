/*
C is designed to be a low-level language that can easily access memory locations and perform memory-related operations.
For instance, the scanf() function places the value entered by the user at the location, or address, of the variable. This is accomplished by using the & symbol.

A pointer is a variable that contains the address of another variable. In other words,
it "points" to the location assigned to a variable and can indirectly access the variable.

pointer_type *identifier

There are several things to notice about this program:
• Pointers should be initialized to NULL until they are assigned a valid location.
• Pointers can be assigned the address of a variable using the ampersand & sign.
• To see what a pointer is pointing to, use the * again, as in *p. In this case the * is called the indirection or dereference operator. The process is called dereferencing.

Some algorithms use a pointer to a pointer. This type of variable declaration uses **, and can be assigned the address of another pointer, as in:
int x = 12;
int *p = NULL
int **ptr = NULL;
p = &x;
ptr = &p;

Pointers can be used in expressions just as any variable. Arithmetic operators can be applied to whatever the pointer is pointing to.
Note that parentheses are required for the ++ operator to increment the value being pointed to. The same is true when using the -- operator.

*/

#include <stdio.h>

void address(int k)
{
    printf("The address of k is : %x",&k);
    return;
}

int main()
{
    int x = 10;
    printf("address of x is : %x",&x);
    address(x);

    return 0;
}