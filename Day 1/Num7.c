#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
    float radius,length,area,volume;
    printf("Enter the radius and length of a cylinder: ");
    scanf("%f", &radius);
    scanf("%f", &length);
    area = PI * pow(radius, 2);
    volume = area * length;
    printf("The Area is %f\nThe Volume is %f\n", area, volume);
    return 0;
}


Output
Enter the radius and length of a cylinder: 5.5 12
The Area is 95.033096
The Volume is 1140.397217