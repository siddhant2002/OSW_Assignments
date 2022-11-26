#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    printf("Enter a string\n");
    scanf("%[^\n]s",c);
    int f=strlen(c);
    for(int i=0;i<f;i++)
    {
        if(c[i]>='a' && c[i]<='z')
        {
            c[i]-=32;
        }
        else if(c[i]>='A' && c[i]<='Z')
        {
            c[i]+=32;
        }
    }
    printf("%s",c);
    return 0;
}

Output
Enter a string
this IS A kurkur pupaudi
THIS is a KURKUR PUPAUDI