#include <stdio.h>
float celsius_at_depth(float);
float fahrenheit(float);
int main()
{
    float d;
    printf("Enter the depth\n");
    scanf("%f",&d);
    float c=celsius_at_depth(d);
    float f=fahrenheit(c);
    printf("The Celsius temperature at depth in km is %.2f\n",c);
    printf("The fahrenheit temperature at depth in km is %.2f",f);
}
float celsius_at_depth(float d)
{
    float c=10*d+20;
    return c;
}
float fahrenheit(float c)
{
    float f=1.8*c+32;
    return f;
}

Output 
Enter the depth
1.7
The Celsius temperature at depth in km is 37.00
The fahrenheit temperature at depth in km is 98.60