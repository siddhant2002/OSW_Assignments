#include<stdio.h>
void arrange(int*,int*);
int main()
{
    int a[6];
    printf("Enter 6 numbers\n");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            arrange(&a[i],&a[j]);
        }
    }
    for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
void arrange(int *p, int *p1)
{
    int *k;
    if(*p>*p1)
    {
        *k=*p;
        *p=*p1;
        *p1=*k;
    }
}

Output
Enter 6 numbers
9
7
1
3
5
10
1 3 5 7 9 10 