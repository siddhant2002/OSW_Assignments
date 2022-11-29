#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    float a[n];
    float s=0;
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        s+=a[i];
    }
    printf("The mean is %f\n",s/n);
    s/=n;
    float p=0;
    for(int i=0;i<n;i++)
    {
        int k=abs(a[i]-s);
        k=pow(k,2);
        p+=k;
    }
    p=sqrt(p/n);
    printf("The standard deviation is %.2f\n",p);
    return 0;
}

Output
Enter the size of the array
5
1
6
3
9
4
The mean is 4
The standard deviation is 2.79
