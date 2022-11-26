#include <stdio.h>
void maxMin(int arr[5], int n);
int main()
{
    int arr[5];
    printf("Enter 5 numbers\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    maxMin(arr, 5);
    return 0;
}
void maxMin(int arr[5], int n)
{
    int max=0,min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("The Maximum element is %d\n", max);
    printf("The Minimum element is %d\n", min);
}

Output
Enter 5 numbers
4
5
32
8
2
The Maximum element is 32
The Minimum element is 2