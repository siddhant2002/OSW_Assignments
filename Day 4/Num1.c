#include <stdio.h>
int main(int argc, char *argv[])
{
    printf("Number of arguements are %d\n",argc);
    // argv[0] is for file name
    for(int i=1;i<argc;i++)
    {
        printf(" %s\n",argv[i]);
    }
    return 0;
}