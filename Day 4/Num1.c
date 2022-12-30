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
Outputs
a -> 1

b -> 4
ITER
SOA
IBCS

c -> 2
12 34 56

d -> 7
ITER
SOA
IBCS
"23
45
67"

e -> 3
./a.out
123456

f -> 3
./a.out
'123456'

g -> 3
./a.out
"123456"

h -> 6
./a.out
12
14
45
66

i -> 2
12345678

j -> 1

k -> No of arguments are 4
argv[0]: ./a.out
argv[1]: 12
argv[2]: /home/2041013040
argv[3]: 34

l -> 4
12
'pwd'
34