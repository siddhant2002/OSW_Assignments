#include <stdio.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="I myself potato chips\nI'm very tasty\nToo much consumption will cause death";
    char *t, *m, *a, *b;
    int c=0,x=0;
    t=strtok_r(s,"\n",&a);
    while(t!=NULL)
    {
        c++;
        m=strtok_r(a," ",&b);
        while(m!=NULL)
        {
            x++;
            printf("%s\n",m);
            m=strtok_r(NULL," ",&b);
        }
        t=strtok_r(NULL,"\n",&a);
    }
    printf("%d %d",c,x);
    printf("%.1f",((float)x/(float)c));
    return 0;
}