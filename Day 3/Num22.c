#include <stdio.h>
#include<string.h>
void strncpy(char s[],char t[],int n);
void strncat(char s[],char t[]);
int strncmp(char s[],char t[]);
int main()
{
    char s[100],t[100];
    int n;
    printf("Enter the string\n");
    scanf("%[^\n]s",s);
    printf("Enter the string\n");
    scanf(" %[^\n]s",t);
    printf("Enter the number of characters to be copied\n");
    scanf("%d",&n);
    strncpy(s,t,n);
    printf("The copied string is %s\n",s);
    strncat(s,t);
    printf("The concatenated string is %s\n",s);
    int r=strncmp(s,t);
    if(r==0)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not equal\n");
    }
    return 0;
}
void strncpy(char s[],char t[] ,int n)
{
    int i,j;
    for(i=0;s[i]!='\0';i++);
    for(j=0;j<n && t[j]!='\0';j++,i++)
    {
        s[i]=t[j];
    }
    s[i]='\0';
}
int strcmp(char s[],char t[])
{
    int i,j;
    for(i=0;s[i]!='\0';i++);
    for(j=0;t[j]!='\0';j++,i++)
    {
        if(s[i]!=t[j])
        {
            return 0;
        }
    }
    return 1;
}
void strncat(char s[],char t[])
{
    int i,j;
    for(i=0;s[i]!='\0';i++);
    for(j=0;t[j]!='\0';j++,i++)
    {
        s[i]=t[j];
    }
    s[i]='\0';
}

Output
Enter the string
chow
Enter the string
rice
Enter the number of characters to be copied
3
The copied string is chowric
The concatenated string is chowricrice
Not equal