#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *t1,*t2,*t3,*t4,*t5,*t6;
    t1=getenv("PWD");
    t2=getenv("HOME");
    t3=getenv("LOGNAME");
    t4=getenv("USER");
    t5=getenv("PATH");
    t6=getenv("COLORTERM");
    printf("PWD is %s\n",t1);
    printf("HOME is %s\n",t2);
    printf("LOGNAME is %s\n",t3);
    printf("USER is %s\n",t4);
    printf("PATH is %s\n",t5);
    printf("COLORTERM is %s\n",t6);
    return 0;
}

Output
2041013040@2041013040-VirtualBox:~$ gcc Num12.c
2041013040@2041013040-VirtualBox:~$ ./a.out
PWD is /home/2041013040
HOME is /home/2041013040
LOGNAME is 2041013040
USER is 2041013040
PATH is /usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:
/usr/local/games:/snap/bin
COLORTERM is truecolor