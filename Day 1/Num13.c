#include <stdio.h>
#include <math.h>
#define PI 3.141592654
double thirdsidecompute(int,int,int);
int main()
{
    int b,c,d;
    printf("Enter the side of b\n");
    scanf("%d",&b);
    printf("Enter the side of c\n");
    scanf("%d",&c);
    printf("Enter the degree\n");
    scanf("%d",&d);
    printf("Length of 3rd side = %.1f", thirdsidecompute(b,c,d));
    return 0;
}
double thirdsidecompute(int a, int b, int c)
{
    float f=c*(PI/180);
    return sqrt(pow(a,2)+pow(b,2)-(2*a*b*cos(f)));
}


Output
Enter the side of b
5
Enter the side of c
9
Enter the degree
68
Length of 3rd side = 8.5