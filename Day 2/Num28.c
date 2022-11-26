#include<stdio.h>
#include<math.h>
int main()
{
    double a[11];
    double b[11];
    for(int i=0;i<11;i++)
    {
        a[i]=sqrt(i);
        b[i]=pow(i,3);
    }
    for(int i=0;i<11;i++)
    {
        printf("%.2f %.0f\n",a[i],b[i]);
    }
    return 0;
}

Output
0.00 0
1.00 1
1.41 8
1.73 27
2.00 64
2.24 125
2.45 216
2.65 343
2.83 512
3.00 729
3.16 1000