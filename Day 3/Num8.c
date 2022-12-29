#include <stdio.h>
int main()
{
    double a[] = {1.2,5.2,1.8,1.8,1.6,4.7};
    double *p1=a;
    printf("%.1lf\n",*p1);
    double *p2=a+1;
    printf("%.1lf\n",*p2);
    double *p3=a+2;
    printf("%.1lf\n",*p3);
    double *p4=a+3;
    printf("%.1lf\n",*p4);
    double *p5=a+4;
    printf("%.1lf\n",*p5);
    double *p6=a+5;
    printf("%.1lf\n",*p6);
    return 0;
}
Output
1.2
5.2
1.8
1.8
1.6
4.7