file name -> swap.c
void swap(int x, int y)
{
    x=x+y;
    y-=x;
    x-=y;
    printf("The swapped values are %d and %d\n",x,y);
}

file name -> main.c
#include<stdio.h>
#include "swap.h"
int main()
{
    int a=10,b=15;
    printf("The values are %d and %d\n",a,b);
    swap(a,b);
    return 0;
}