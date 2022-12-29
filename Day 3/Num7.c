#include <stdio.h>
int main()
{
    int a[] = {120,502,118,188,106,447};
    int *p1=a;
    printf("%d\n",*p1);
    int *p2=a+1;
    printf("%d\n",*p2);
    int *p3=a+2;
    printf("%d\n",*p3);
    int *p4=a+3;
    printf("%d\n",*p4);
    int *p5=a+4;
    printf("%d\n",*p5);
    int *p6=a+5;
    printf("%d\n",*p6);
    return 0;
}

Output
120
502
118
188
106
447