#include<stdio.h>
#include<string.h>
int main()
{
    char c[50];
    int i=0;
    char m;
    int a=0,b=0,d=0,p=0,s=0;
    while((m = getchar()) != '\n' && m != EOF)
    {
        c[i++]=m;
        if(m>='A' && m<='Z')
        {
            a++;
        }
        else if(m>='a' && m<='z')
        {
            b++;
        }
        else if(m>='0' && m<='9')
        {
            d++;
        }
        else if(m==' ')
        {
            s++;
        }
        else
        {
            p++;
        }
    }
    printf("Number of uppercase alphabets: %d\n",a);
    printf("Number of lowercase alphabets: %d\n",b);
    printf("Number of digits: %d\n",d);
    printf("Number of punctuation mark: %d\n",p);
    printf("Number of spaces: %d\n",s);
    return 0;
}

Output
ABcdef jfjd'..de5435
Number of uppercase alphabets: 2
Number of lowercase alphabets: 10
Number of digits: 4
Number of punctuation mark: 3
Number of spaces: 1