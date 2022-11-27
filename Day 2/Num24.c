#include <stdio.h>
void addition(int *,int *);
void subtraction(int *,int *);
void multiplication(int *,int *);
void division(int *,int *);
int main()
{
    int n1,n2,ch;
    printf("Enter two numbers\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for division\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        addition(&n1, &n2);
        printf("The addition is %d\n", n1);
        break;
        case 2:
        subtraction(&n1, &n2);
        printf("The subtraction is %d\n", n1);
        break;
        case 3:
        multiplication(&n1, &n2);
        printf("The multiplication is %d\n", n1);
        break;
        case 4:
        division(&n1, &n2);
        printf("The division is %d\n", n1);
        break;
        default:
        printf("Wrong choice\n");
    }
    return 0;
}
void addition(int *n1, int *n2)
{
    *n1=*n1+*n2;
}
void subtraction(int *n1, int *n2)
{
    *n1=*n1-*n2;
}
void multiplication(int *n1, int *n2)
{
    *n1=*n1 * *n2;
}
void division(int *n1, int *n2)
{
    *n1 = *n1 / *n2;
}

Output
Enter two numbers
45
21
Press 1 for addition
Press 2 for subtraction
Press 3 for multiplication
Press 4 for division
Enter your choice
4
The division is 2