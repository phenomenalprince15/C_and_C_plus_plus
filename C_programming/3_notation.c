// %[-][width].[precision]conversion character 
#include <stdio.h>

int main()
{
    int x = 8;
int y = 7;
x++;
printf("x = %d, y = %d",x,y);
x+= y--;
printf("x = %d, y = %d",x,y);
}