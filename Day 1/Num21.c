#include <stdio.h>
int main()
{
    int c = 0, num, res, n, flag = 0, i;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("\n1. Factorial of a number\n2. Prime or not\n3. Odd or even\n4. Exit\n");
    printf("\nEnter your choice\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        n=num;
        res=num;
        while (num>1)
        {
            res=res*(num-1);
            num=num-1;
        }
        printf("\nFactorial of the number is %d\n",res);
        break;
        case 2:
        n = num;
        for (i = 2; i <= n / 2; i++)
        {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (num == 1)
    {
        printf("\n1 is neither prime nor composite");
    }
    else
    {
        if(flag == 0)
        {
            printf("\n%d is Prime Number.\n\n", n);
        }
        else
        {
            printf("\n%d is not a Prime Number.\n\n", n);
        }
    }
    break;
    case 3:
    n = num;
    if (num % 2 == 0)
    printf("\nEven Number.\n\n");
    else
    printf("\nOdd Number.\n\n");
    break;
    case 4:
    printf("\nExit");
    break;
    }
}


Output 

Enter a number
4

1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit

Enter your choice
2

4 is not a Prime Number.