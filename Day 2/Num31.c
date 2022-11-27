#include<stdio.h>
void find_largest(int[],int);
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
    find_largest(a,n);
    return 0;
}
void find_largest(int a[], int n)
{
    int p=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>p)
        {
            p=a[i];
        }
    }
    printf("The largest number is %d\n",p);
}

Output

Enter the size of the array
7
Enter 7 numbers
2
3
1
-6
3
6
2
The largest number is 6