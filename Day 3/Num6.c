#include <stdio.h>
int main()
{
    char a[]={'I','B','C','S','\0'};
    char a1[]={'S','O','A','D','U'};
    char *p1=a;
    printf("The values and addresses of 1st array are\n");
    for(int i=0;i<4;i++)
    {
        printf("%c %p\n",*(p1+i),(p1+i));
    }
    char *p2=a1;
    printf("\nThe values and addresses of 2nd array are\n");
    for(int i=0;i<5;i++)
    {
        printf("%c %p\n",*(p2+i),(p2+i));
    }
    return 0;
}

Output
The values and addresses of 1st array are
I 0x7ffea073fb9e
B 0x7ffea073fb9f
C 0x7ffea073fba0
S 0x7ffea073fba1

The values and addresses of 2nd array are
S 0x7ffea073fba3
O 0x7ffea073fba4
A 0x7ffea073fba5
D 0x7ffea073fba6
U 0x7ffea073fba7