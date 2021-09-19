#include <stdio.h>
#include <string.h>

int main()
{
    char a;
    char b[100];
    char c;

    a = getchar();
    printf("a = %c",a); //putchar(c);
    //gets(b);
    //printf("%s",b); //puts(c);
    scanf("%s",&c);
    printf("c = %c",c);

    return 0;
}