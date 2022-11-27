#include<stdio.h>
void multiply(int[],int[],int);
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    int a1[n];
    printf("Enter %d numbers\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter %d numbers\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    multiply(a,a1,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
void multiply(int a[], int b[], int n)
{
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]+b[i];
    }
}

Output
Enter the size of the array
3
Enter 3 numbers
56
2
4
Enter 3 numbers
43
5
23
99 7 27