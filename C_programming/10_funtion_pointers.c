/*
Pointers to functions, or function pointers, point to executable code for a function in memory.
Function pointers can be stored in an array or passed as arguments to other functions.

return_type (*func_name)(parameters)

result = (*op[choice]) (int, int) // array of function pointers.

Void pointer : A void pointer is used to refer to any address type in memory and 
               as a declaration that looks like:
void *ptr;
When dereferencing a void pointer,
you must first type cast the pointer to the appropriate data type before dereferencing with *.
like, (*(char *)ptr);

* function using void pointer
Using a void * return type allows for any return type.
Similarly, parameters that are void * accept any argument type. If you want to use the data passed in by the parameter without changing it, you declare it const.
- void * square (const void *);
* function pointers as arguments
-void qsort(void *base, size_t num, size_t width, int (*compare)(const void *, const void *)) 
*/

#include <stdio.h>

void say_hello(int k)
{
    for (int i=0; i<k; i++)
        printf("Hello!\n");
}

int main()
{
    void (*func_ptr) (int);
    func_ptr = say_hello;

    func_ptr(3);

    return 0;
}