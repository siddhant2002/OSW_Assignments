#include <stdio.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="I myself potato chips\nI'm very tasty\nToo much consumption will cause death";
    char p[strlen(s)];
    strcpy(p,s);
    char *t, *m;
    int c=0,x=0;
    t=strtok(s,"\n");
    while(t!=NULL)
    {
        c++;
        t=strtok(NULL,"\n");
    }
    m=strtok(p," ");
    while(m!=NULL)
    {
        x++;
        m=strtok(NULL," ");
    }
    x=x+c-1;
    printf("%.1f",((float)x/(float)c));
    return 0;
}
Output
4.3