#include <stdio.h>
int charcopy(char*,char*);
int main()
{
    char pmsg[60];
    int nc;
    nc=charcopy(pmsg,"I am in 5th Sem CSE");
    printf("%d...%s\n",nc,pmsg);
    return 0;
}
int charcopy(char *s, char *t)
{
    int i=0;
    while((s[i]=t[i])!='\0')
    {
        i++;
    }
    s[i]='\0';
    return i;
}

Output
19...I am in 5th Sem CSE