#include <stdio.h>
#include<string.h>
int main()
{
    char c;
    printf("Enter the colour of the cylinder\n");
    scanf("%c",&c);
    if((c-'O') == 0 || (c-'o') == 0)
    {
        printf("Cylinder contains Ammonia\n");
    }
    else if((c-'B') == 0 || (c-'b') == 0)
    {
        printf("Cylinder contains Carbon Monoxide\n");
    }
    else if((c-'Y') == 0 || (c-'y') == 0)
    {
        printf("Cylinder contains Hydrogen\n");
    }
    else if((c-'G') == 0 || (c-'g') == 0)
    {
        printf("Cylinder contains Oxygen\n");
    }
    else
    {
        printf("Contents unknown.\n");
    }
    return 0;
}

Output 
Enter the colour of the cylinder
Y
Cylinder contains Hydrogen