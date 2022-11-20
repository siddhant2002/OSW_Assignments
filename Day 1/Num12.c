#include <stdio.h>
#include <math.h>
void compute_root(double,double,double);
int main()
{
    double a,b,c;
    printf("Enter coefficients of a b and c\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    compute_root(a,b,c);
    return 0;
}
void compute_root(double a, double b, double c)
{
    double d, root1, root2, r, i;
    d=b*b-4*a*c;
    if(d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("root1 is %.2f and root2 is %.2f",root1,root2);
    }
    else if(d==0)
    {
        root1=root2=-b/(2*a);
        printf("root1 = root2 = %.2f;",root1);
    }
    else
    {
        r=-b/(2*a);
        i=sqrt(-d)/(2*a);
        printf("root1 is %.2f+%.2fi and root2 is %.2f-%.2fi",r,i,r,i);
    }
}

Output 
Enter coefficients of a b and c
2
3
1
root1 is -0.50 and root2 is -1.00