#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 3 numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    a=a+b+c;
    b=a-b-c;
    c=a-b-c;
    a=a-b-c;
    printf("The values are %d %d %d\n",a,b,c);
    return 0;
}


Output
Enter 3 numbers
3
9
2
The values are 2 3 9