#include <stdio.h>
int main()
{
    double a[] = {1.2,5.2,1.8,1.8,1.6,4.7};
    for(int i=0;i<6;i++)
    {
        double *p1=&a[i];
        printf("%.1lf ",*p1);
    }
    return 0;
}
Output
1.2 5.2 1.8 1.8 1.6 4.7