#include<stdio.h>
int main()
{
    int a=345;
    float f=4.5;
    char c='z';
    printf("The value is %d %p\n",a,&a);
    printf("The value is %.1f %p\n",f,&f);
    printf("The value is %c %p\n",c,&c);
    return 0;
}

Output
The value is 345 0x7ffe18676980
The value is 4.5 0x7ffe18676984
The value is z 0x7ffe1867697f