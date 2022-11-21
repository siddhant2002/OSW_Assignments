#include <stdio.h>
int main()
{
    for(int i=0;i<=6;i++)
    {
        for(int j='A';j<='G'-i;j++)
        {
            printf("%c",j);
        }
        for (int j=1;j<=i*2-1;j++)
        {
            printf(" ");
        }
        for (int j='G'-i;j>='A';j--)
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
