#include<stdio.h>
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
    int b[n];
    int p=0;
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<p;j++)
        {
            if(a[i]==b[j])
            {
                break;
            }
        }
        if(j==p)
        {
            b[p++]=a[i];
        }
    }
    printf("The distinct elements are\n");
    for(int i=0;i<p;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}

Output
Enter the size of the array
9
Enter 9 numbers
3
4
5
1
2
3
9
4
2
The distinct elements are
3 4 5 1 2 9 