#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter number of strings\n");
    scanf("%d",&n);
    char p[n][50];
    printf("Enter %d strings\n",n);
    for(int i=0;i<n;i++)
    {
        scanf(" %[^\n]s",p[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(strcmp(p[j],p[j+1])>0)
            {
                char *c;
                strcpy(c,p[j]);
                strcpy(p[j],p[j+1]);
                strcpy(p[j+1],c);
            }
        }
    }
    printf("The sorted strings are\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\n",p[i]);
    }
    return 0;
}

Output
Enter number of strings
3
Enter 3 strings
chopu
world
alps
The sorted strings are
alps
chopu
world