#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The addresses before swap are %p %p\n",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The addresses after swap are %p %p\n",&a,&b);
    return 0;
}

Output
Enter two numbers
3
32
The addresses before swap are 0x7ffe95dc16c0 0x7ffe95dc16c4
The addresses after swap are 0x7ffe95dc16c0 0x7ffe95dc16c4