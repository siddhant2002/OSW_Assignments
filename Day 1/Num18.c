#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char str[40];
    printf("Enter a string\n");
    scanf("%[^\n]s", str);
    int num;
    printf("Enter the number of times the message to be displayed\n");
    scanf("%d",&num);
    int i=1;
    while (i<=num)
    {
        printf("%d", i);
        if(i % 100 >= 11 && i % 100 <= 20)
        {
            printf("th");
        }
        else if(i%10==1)
        {
            printf("st");
        }
        else if(i%10==2)
        {
            printf("nd");
        }
        else if(i%10==3)
        {
            printf("rd");
        }
        else
        {
            printf("th");
        }
        printf(" %s\n", str);
        i++;
    }
}

Output
Enter a string
hello
Enter the number of times the message to be displayed
10
1st hello
2nd hello
3rd hello
4th hello
5th hello
6th hello
7th hello
8th hello
9th hello
10th hello