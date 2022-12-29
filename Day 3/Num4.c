#include <stdio.h>
int main()
{
    int a[10] = {0,10,20,30,40,50,60,70,80,90};
    int i;
    for(i=0;i<10;i++)
    {
        printf("Value is %d and the address is %p\n",a[i],&a[i]);
    }
    return 0;
}

Output
Value is 0 and the address is 0x7ffda4ebce20
Value is 10 and the address is 0x7ffda4ebce24
Value is 20 and the address is 0x7ffda4ebce28
Value is 30 and the address is 0x7ffda4ebce2c
Value is 40 and the address is 0x7ffda4ebce30
Value is 50 and the address is 0x7ffda4ebce34
Value is 60 and the address is 0x7ffda4ebce38
Value is 70 and the address is 0x7ffda4ebce3c
Value is 80 and the address is 0x7ffda4ebce40
Value is 90 and the address is 0x7ffda4ebce44