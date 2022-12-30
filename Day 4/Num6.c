#include <stdio.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="CSE/CSIT//EEE/EC//MECH//CIVIL:MBA:MBBS";
    char *t;
    t=strtok(s,":");
    while(t!=NULL)
    {
        printf("SubToken = %s\n",t);
        t=strtok(NULL,":");
    }
    return 0;
}

Output
SubToken = CSE/CSIT//EEE/EC//MECH//CIVIL
SubToken = MBA
SubToken = MBBS