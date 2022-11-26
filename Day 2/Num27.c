#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the size of the 1st array\n");
    scanf("%d",&m);
    printf("Enter the size of the 2nd array\n");
    scanf("%d",&n);
    int a[m];
    int b[n];
    printf("Enter %d numbers\n",m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter %d numbers\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int c[m+n];
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(a[i]>b[j])
        {
            c[k++]=b[j++];
        }
        else
        {
            c[k++]=a[i++];
        }
    }
    while(i<m)
    {
        c[k++]=a[i++];
    }
    while(j<n)
    {
        c[k++]=b[j++];
    }
    for(int i=0;i<m+n;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}

Output
Enter the size of the 1st array
3
Enter the size of the 2nd array
2
Enter 3 numbers
1
4
9
Enter 2 numbers
5
9
1 4 5 9 9 