#include <stdio.h>
#include <math.h>
double speeds_ratio(double,double);
int main()
{
    float m, mi;
    printf("Enter the max rpm\n");
    scanf("%f",&m);
    printf("Enter the min rpm\n");
    scanf("%f",&mi);
    printf("The ratio between successive speeds of a six-speed gearbox with maximum speed %.2f rpm and minimum speed %.2f rpm is %.2f\n", m, mi,speeds_ratio(m, mi));
}
double speeds_ratio(double m, double mi)
{
    double s;
    s=pow((m/mi),(1.0/5));
    return s;
}

Output
Enter the max rpm
600
Enter the min rpm
300
The ratio between successive speeds of a six-speed gearbox with maximum speed 600.00 rpm and minimum speed 300.00 rpm is 1.15