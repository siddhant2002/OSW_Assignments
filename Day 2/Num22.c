#include <stdio.h>
void add(int *n1, int *n2);
int main()
{
    int n1,n2;
    printf("Enter two numbers\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    add(&n1, &n2);
    printf("The sum is %d\n", n1);
    return 0;
}
void add(int *n1, int *n2) 
{
    *n1=*n1+*n2;
}

Output
Enter two numbers
23
43
The sum is 66