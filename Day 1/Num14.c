#include <stdio.h>
#include <math.h>
void task(float,float,float,float,float,float);
int main()
{
    float x1,y1,z1,x2,y2,z2;
    printf("Enter the coordinates of x1 y1 and z1\n");
    scanf("%f%f%f",&x1,&y1,&z1);
    printf("Enter the coordinates of x2 y2 and z2\n");
    scanf("%f%f%f",&x2,&y2,&z2);
    task(x1,y1,z1,x2,y2,z2);
    return 0;

}
void task(float x1, float y1, float z1, float x2, float y2, float z2)
{
    float d=sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2)*1.0);
    printf("The distance is %.1f",d);
}

Output 
Enter the coordinates of x1 y1 and z1
12
13
14
Enter the coordinates of x2 y2 and z2
14
15
16
The distance is 3.5