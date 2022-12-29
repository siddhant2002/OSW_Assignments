#define STRSIZ 20
#include<stdio.h>
#include<string.h>

int main()
{
    char s1[STRSIZ]="Jupiter ", s2[STRSIZ]="Symphony";
    printf("%ld %ld\n", strlen(s1), strlen(strcat(s1,s2)));
    printf("%s\n", s1);
    return 0;
}

Output
16 16
Jupiter Symphony