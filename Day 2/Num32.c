#include<stdio.h>
void sort(int[],int);
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements in original format are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    sort(a,n);
    return 0;
}
void sort(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int d=a[j];
                a[j]=a[j+1];
                a[j+1]=d;
            }
        }
    }
    printf("The elements in sorted order are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

Output
Enter the size of the array
8
Enter 8 numbers
9
1
5
6
7
3
2
6
The elements in original format are
9 1 5 6 7 3 2 6 
The elements in sorted order are
1 2 3 5 6 6 7 9 
