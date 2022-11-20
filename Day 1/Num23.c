#include <stdio.h>
int main()
{
    float h,c,t;
    int h_f = 0, cc_f = 0, ts_f = 0;
    int grade;
    printf("Enter the value of Hardness\n");
    scanf("%f",&h);
    printf("Enter the value of Carbon Content\n");
    scanf("%f",&c);
    printf("Enter the value of Tensile Strength\n");
    scanf("%f",&t);
    if(h>50)
        h_f = 1;
    if(c<0.7)
        cc_f = 1;
    if(t>5600)
        ts_f = 1;
    if(h_f == 0 && cc_f == 0 && ts_f == 0)
        grade = 5;
    if(h_f == 1 || cc_f == 1 || t == 1)
        grade = 6;
    if(h_f == 1 && cc_f == 0 && ts_f == 1)
        grade = 7;
    if(h_f == 0 && cc_f == 1 && ts_f == 1)
        grade = 8;
    if(h_f == 1 && cc_f == 1 && ts_f == 0)
        grade = 9;
    if(h_f == 1 && cc_f == 1 && ts_f == 1)
        grade = 10;
    printf("The grade of steel is %d\n", grade);
}


Output
Enter the value of Hardness
34
Enter the value of Carbon Content
0.5
Enter the value of Tensile Strength
4500
The grade of steel is 6