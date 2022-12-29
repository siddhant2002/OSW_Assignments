#include <stdio.h>
#include <string.h>
int main(){
    char s[50];
    char p[50];
    printf("Enter the string\n");
    scanf("%[^\n]s",s);
    int i,j,k;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!=' ')
        {
            break;
        }
    }
    for(j=i;j<strlen(str);j++)
    {
        if(str[j]!=' ')
        {
            break;
        }
    }
    strncpy(p,s+i,j-i+1);
    printf("%s\n",p);
    return 0;
}

Output
Enter the string
Hello
H