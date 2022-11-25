#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    int *p,**p1;
    p=&a;
    p1=&p;
    printf("The value of a is %d\n",*p);
    printf("The address is %p\n",&a);
    printf("The address is %p\n",p);
    printf("The address is %p\n",&p);
    printf("The address is %p\n",p1);
    printf("The address is %p\n",&p1);
    return 0;
}

Output (Not mandatory to write)
Enter a number
435
The value of a is 435
The address is 0x7ffd1bae8294
The address is 0x7ffd1bae8294
The address is 0x7ffd1bae8298
The address is 0x7ffd1bae8298
The address is 0x7ffd1bae82a0