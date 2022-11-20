#include <stdio.h>
int main()
{
    float yl,yw,hl,hw;
    printf("Enter yard length\n");
    scanf("%f",&yl);
    printf("Enter yard width\n");
    scanf("%f",&yw);
    printf("Enter house length\n");
    scanf("%f",&hl);
    printf("Enter house width\n");
    scanf("%f",&hw);
    float p=(yl*yw)-(hl*hw);
    printf("The time required to cut the grass is %.2f",(p/2));
    return 0;
}

Output 
Enter yard length
45
Enter yard width
40
Enter house length
30
Enter house width
20
The time required to cut the grass is 600.00
