#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    int *p,*p1;
    p=&a;
    p1=&b;
    if(*p>*p1)
    {
        printf("The largest number is %d\n",*p);
    }
    else
    {
        printf("The largest number is %d\n",*p1);
    }
    return 0;
}

Output
Enter two numbers
5
53
The largest number is 53
