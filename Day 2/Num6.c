#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    int *p,*p1,*p2;
    p=&a;
    p1=&a;
    p2=&a;
    printf("The value of a is %d\n",*p);
    printf("The value of a is %d\n",*p1);
    printf("The value of a is %d\n",*p2);
    return 0;
}

Output
Enter a number
23
The value of a is 23
The value of a is 23
The value of a is 23