#include <stdio.h>
int main()
{
    int a[]={10,13,20,33,44};
    double a1[]={10.2,13.3,20.0,33.3,45.3,89.9};
    int *p1=a;
    printf("The values and addresses of 1st array are\n");
    for(int i=0;i<5;i++)
    {
        printf("%d %p\n",*(p1+i),(p1+i));
    }
    double *p2=a1;
    printf("\nThe values and addresses of 2nd array are\n");
    for(int i=0;i<6;i++)
    {
        printf("%.1f %p\n",*(p2+i),(p2+i));
    }
    return 0;
}

Output
The values and addresses of 1st array are
10 0x7ffe681a4a20
13 0x7ffe681a4a24
20 0x7ffe681a4a28
33 0x7ffe681a4a2c
44 0x7ffe681a4a30

The values and addresses of 2nd array are
10.2 0x7ffe681a4a40
13.3 0x7ffe681a4a48
20.0 0x7ffe681a4a50
33.3 0x7ffe681a4a58
45.3 0x7ffe681a4a60
89.9 0x7ffe681a4a68