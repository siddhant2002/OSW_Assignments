#include <stdio.h>
void task(int);
int main()
{
    int n;
    printf("Enter an Number\n");
    scanf("%d",&n);
    task(n);
    return 0;
}

void task(int n)
{
    int s=0;
    int dup=n;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    if(s%9==0)
    {
        printf("Number is divisible by 9\n");
    }
    else
    {
        printf("Number is not divisible by 9\n");
    }
}

Output 
Enter an Number
6947382
Number is not divisible by 9