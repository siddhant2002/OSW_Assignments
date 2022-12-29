#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    printf("Enter a string\n");
    scanf("%[^\n]s",c);
    printf("%s\n",c);
    return 0;
}

Output
Enter a string
Reporting to base
Reporting to base