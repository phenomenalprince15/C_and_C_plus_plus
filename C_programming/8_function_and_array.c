/*
An array cannot be passed by value to a function. However, an array name is a pointer,
so just passing an array name to a function is passing a pointer to the array.

Keep in mind that a[k] is the same as *(a + k).
*/

#include <stdio.h>

int add(int *a, int size)
{
    int result=0;
    for (int i=0;i<size;i++)
    {
        result += *(a+i);
    }

    return result;
}

int main()
{
    int a[5] = {100,200,300,400,500};
    int size = sizeof(a)/sizeof(a[0]);
    printf("sum is : %d\n",add(a,size));

    return 0;
}