#include <stdio.h>
void sum_n_avg(double,double,double,double*,double*);
int main()
{
    double a,b,c,s,avg;
    double *p=&s,*p1=&avg;
    printf("Enter the three numbers\n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    sum_n_avg(a,b,c,p,p1);
    printf("The sum is %lf\n",*p);
    printf("The average is %lf\n",*p1);
    return 0;
}
void sum_n_avg(double a, double b, double c,double *p,double *p1)
{
    *p=a+b+c;
    *p1=*p/3;
}

Output
Enter the three numbers
67.543
54.435
2.547
The sum is 124.525000
The average is 41.508333