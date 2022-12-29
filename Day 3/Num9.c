#include <stdio.h>
int main()
{
    int a[] = {120,502,118,188,106,447};
    for(int i=0;i<6;i++)
    {
        int *p1=&a[i];
        printf("%d ",*p1);
    }
    return 0;
}

Output
20 502 118 188 106 447