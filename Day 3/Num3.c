#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    printf("Enter a string\n");
    scanf("%[^\n]s",c);
    for(int i=0;i<strlen(c);i++)
    {
        printf("%c %p\n",c[i],&c[i]);
    }
    return 0;
}

Output
Enter a string
Hi there, Welcome
H 0x7ffee85ab850
i 0x7ffee85ab851
  0x7ffee85ab852
t 0x7ffee85ab853
h 0x7ffee85ab854
e 0x7ffee85ab855
r 0x7ffee85ab856
e 0x7ffee85ab857
, 0x7ffee85ab858
  0x7ffee85ab859
W 0x7ffee85ab85a
e 0x7ffee85ab85b
l 0x7ffee85ab85c
c 0x7ffee85ab85d
o 0x7ffee85ab85e
m 0x7ffee85ab85f
e 0x7ffee85ab860