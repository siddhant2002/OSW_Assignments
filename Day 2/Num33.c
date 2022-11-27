#include<stdio.h>
void binary_search(int[],int,int);
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers in ascending order\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    printf("Enter the element to be searched\n");
    scanf("%d",&x);
    binary_search(a,n,x);
    return 0;
}
void binary_search(int a[], int n, int x)
{
    int i=0,j=n-1;
    while(i<=j)
    {
        int m=i+(j-i)/2;
        if(a[m]==x)
        {
            printf("Number found\n");
            return;
        }
        else if(a[m]>x)
        {
            j=m-1;
        }
        else
        {
            i=m+1;
        }
    }
    printf("Number not found\n");
}

Output
Enter the size of the array
5
Enter 5 numbers in ascending order
3
4
7
8
9
Enter the element to be searched
4
Number found