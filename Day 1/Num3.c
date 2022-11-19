#include<stdio.h>

int main()
{
    float k,a,t1,t2,l;
    printf("Enter the value of K\n");
    scanf("%f",&k);
    printf("Enter the value of A\n");
    scanf("%f",&a);
    printf("Enter the value of initial temperature\n");
    scanf("%f",&t1);
    printf("Enter the value of final temperature\n");
    scanf("%f",&t2);
    printf("Enter the value of L\n");
    scanf("%f",&l);
    float q=(k*a)*(t1-t2);
    q/=l;
    printf("The value is %.2f",q);
    return 0;
}


Output

Enter the value of K
0.456
Enter the value of A
0.0432
Enter the value of initial temperature
89
Enter the value of final temperature
53
Enter the value of L
54.432  
The value is 0.01