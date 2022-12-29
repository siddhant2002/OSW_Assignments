#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    printf("Enter a word\n");
    scanf("%[^\n]s",c);
    if(strlen(c)<5)
    {
        printf("<< %s >>",c);
    }
    else if(strlen(c)<10)
    {
        printf("(* %s *)",c);
    }
    else
    {
        printf("/+ %s +/",c);
    }
    return 0;
}

Output
Enter a word
mannu
(* mannu *)