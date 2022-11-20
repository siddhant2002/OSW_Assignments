#include <stdio.h>
int main()
{
    int n,d,l,g;
    printf("Enter number of eggs\n");
    scanf("%d",&n);
    g=n/144;
    n=n%144;
    d=n/12;
    l=n%12;
    printf("Your number of eggs is %d gross, %d dozen, and %d.\n", g, d, l);
    return 0;
}


Output
Enter number of eggs
1340
Your number of eggs is 9 gross, 3 dozen, and 8.
