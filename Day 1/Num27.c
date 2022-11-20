#include <stdio.h>
int main()
{
    int s;
    printf("Enter the speed of wind\n");
    scanf("%d",&s);
    if(s>72)
    {
        printf("Hurricane");
    }
    else if(s>=55)
    {
        printf("Whole gale");
    }
    else if(s>=39)
    {
        printf("Gale");   
    }
    else if(s>=25)
    {
        printf("Strong wind");
    }
    else
    {
        printf("Not a strong wind");
    }
}

Output
Enter the speed of wind
43 
Gale