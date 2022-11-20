#include<stdio.h>
int main()
{
    int x=15.0,y=25.0;
    printf("The value of x!=-y is %d\n",x!=y);
    printf("The value of x<x is %d\n",x<x);
    printf("The value of x>=y-x is %d\n",x>=y-x);
    printf("The value of x==y+x-y is %d\n",x==y+x-y);
    return 0;
}

Output 
The value of x!=-y is 1
The value of x<x is 0
The value of x>=y-x is 1
The value of x==y+x-y is 1