#include<stdio.h>
#include<stdbool.h>
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
    int x;
    printf("Enter the element to be searched\n");
    scanf("%d",&x);
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            flag=true;
            return;
        }
    }
    if(flag)
    {
        printf("Number found\n");
    }
    else
    {
        printf("Number not found\n");
    }
    return 0;
}

Output
Enter the size of the array
6
Enter 6 numbers
3
4
1
9
3
6
Enter the element to be searched
90
Number not found