#include<stdio.h>
int main()
{
    float a;
    printf("Enter a number\n");
    scanf("%f",&a);
    float *p,*p1,*p2;
    p=&a;
    p1=&a;
    p2=&a;
    printf("The value of a is %.1f\n",*p);
    printf("The value of a is %.1f\n",*p1);
    printf("The value of a is %.1f\n",*p2);
    return 0;
}
Output
Enter a number
23.5
The value of a is 23.5
The value of a is 23.5
The value of a is 23.5