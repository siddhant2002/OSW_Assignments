#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three numbers\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float *p;
    p=&a;
    printf("The value of a is %.1f\n",*p);
    p=&b;
    printf("The value of b is %.1f\n",*p);
    p=&c;
    printf("The value of c is %.1f\n",*p);
    return 0;
}

Output
Enter three numbers
23.7
63.2
1.2
The value of a is 23.7
The value of b is 63.2
The value of c is 1.2