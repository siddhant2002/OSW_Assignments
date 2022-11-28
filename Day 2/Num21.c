#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    char m[50];
    bool k=true;
    int i=0;
    while(k)
    {
        char c[50];
        printf("Enter a string\n");
        scanf(" %[^\n]s",c);
        int s=0;
        if(strcmp(c,".")==0)
        {
            k=false;
            break;
        }
        else
        {
            for(int i=0;i<strlen(c);i++)
            {
                s+=c[i];
            }
            s%=64;
            m[i++]=(char)s;
        }
    }
    for(int j=0;j<i;j++)
    {
        printf("%c ",m[j]);
    }
    return 0;
}

Output
Enter a string
Shaabaashiyaan
Enter a string
galliyan
Enter a string
kaisa hua 
Enter a string
ranjha
Enter a string
.
  ' 4 