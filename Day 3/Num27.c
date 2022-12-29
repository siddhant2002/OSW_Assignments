#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    printf("Enter a string\n");
    char p[50];
    scanf("%[^\n]s",p);
    int i=0,j=strlen(p)-1;
    bool k=false;
    while(i<=j)
    {
        if(p[i] != p[j])
        {
            k=true;
            break;
        }
        i++;
        j--;
    }
    if(k)
    {
        printf("Not palindrome\n");
    }
    else
    {
        printf("Palindrome\n");
    }
    return 0;
}
Output
Enter a string
Chopapohc
Not palindrome