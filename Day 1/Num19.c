#include <stdio.h>
int main()
{
    int i,j,k,sp;
    for(int i=0;i<=6;i++)
    {
        for(j='A';j<='G'-i;j++)
        {
            printf("%c",j);
        }
        for (j=1;j<=i*2-1;j++)
        {
            printf(" ");
        }
        for (j='G'-i;j>='A';j--)
        {
            if (j==71)
            {
                
            }
            else
            {
                printf("%c",j);
            }
        }
        printf("\n");
    }
}


Output
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A