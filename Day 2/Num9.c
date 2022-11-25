#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int *p,*p1,*p2;
    p=&a;
    printf("The value of a is %d\n",*p);
    p1=&b;
    printf("The value of b is %d\n",*p1);
    p2=&c;
    printf("The value of c is %d\n",*p2);
    return 0;
}

Output
Enter three numbers
23
63
1
The value of a is 23
The value of b is 63
The value of c is 1