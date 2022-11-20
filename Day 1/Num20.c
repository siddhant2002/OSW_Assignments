#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    float x,d,p,r,a=0;
    printf("Enter the value of x\n");
    scanf("%f",&x);
    d=(x-1)/x;
    for(i=2;i<=9;i++)
    {
        p=pow(d,i);
        r=p/2;
        a=a+r;
    }
    a=d+a;
    printf("Result: %f",a);
}

Output
Enter the value of x
9
Result: 3.058687