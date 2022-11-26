#include<stdio.h>
void double_trouble(int *p, int y);
void trouble(int *x, int *y);
int main()
{
    int a,b;
    trouble(&a,&b);
    printf("The values are %d %d\n",a,b);
    return 0;
}
void double_trouble(int *p, int y)
{
    int x;
    x=10;
    *p=2*x-y;
}
void trouble(int *x, int *y)
{
    double_trouble(x,7);
    double_trouble(y,*x);
}

Output
The values are 13 7