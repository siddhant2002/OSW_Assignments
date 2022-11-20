#include <stdio.h>
#include<math.h>
int main()
{
    int m,n;
    printf("Enter two numbers\n");
    scanf("%d",&m);
    scanf("%d",&n);
    printf("Side1 is %.0f\n",(pow(m,2)-pow(n,2)));
    printf("Side2 is %d\n",(2*m*n));
    printf("Hypotenuse is %.0f",(pow(m,2)+pow(n,2)));
    return 0;
}

Output 
Enter two numbers
3
4
Side1 is -7
Side2 is 24
Hypotenuse is 25