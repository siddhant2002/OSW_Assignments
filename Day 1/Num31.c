#include <stdio.h>
#include <stdlib.h>
long int convert(int);
int main()
{
    int n;
    long int binary;
    printf("Enter a number\n");
    scanf("%d", &n);
    binary = convert(n);
    printf("The number in binary form is %ld\n",binary);
    return 0;
}
long int convert(int n)
{
    long int b=0;
    int r,i=1;
    while (n != 0)
    {
        r=n%2;
        n/=2;
        b+=r*i;
        i*=10;
    }
    return b;
}


Output 
Enter a number
34
The number in binary form is 100010