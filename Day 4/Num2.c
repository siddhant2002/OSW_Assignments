#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    char c[]="ITER-IBCS-SOA-IDS-SUM-CSE";
    char d[]="iter ibcs soa ids sum";
    char *t,*p;
    t=strtok(c,"-");
    p=strtok(d," ");
    printf("String 1\n");
    while(t!=NULL)
    {
        printf("%s\n",t);
        t=strtok(NULL,"-");
    }
    printf("String 2\n");
    while(p!=NULL)
    {
        printf("%s\n",p);
        p=strtok(NULL," ");
    }
    return 0;
}

Output
String 1
ITER
ibcs soa ids sum
String 2
iter