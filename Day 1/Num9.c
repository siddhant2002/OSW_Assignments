#include <stdio.h>
int main()
{
    int p,t;
    float f=14*15,f1=14*2;
    printf("Enter the number of people\n");
    scanf("%d",&p);
    t=p/3;
    printf("Cost of installing toilets is %d \n",(t* 150));
    printf("Amount of water saved is %.1f\n",((f*t)-(f1*t)));
    return 0;
}


Output
Enter the number of people
756
Cost of installing toilets is 37800 
Amount of water saved is 45864.0