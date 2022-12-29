#include<stdio.h>
void stringconcate(char s[], char t[])
{
    int i,j;
    for(i=0;s[i]!='\0';i++);
    for(j=0;t[j]!='\0';j++,i++)
    {
        s[i]=t[j];
    }
    s[i]='\0';
}
int main()
{
    char s[100];
    char t[100];
    printf("Enter the string\n");
    scanf("%[^\n]s",s);
    printf("Enter the string\n");
    scanf(" %[^\n]s",t);
    stringconcate(s,t);
    printf("The concatenated string is %s\n",s);
    return 0;
}

Output
Enter the string
chopa
Enter the string
chopu
The concatenated string is chopachopu