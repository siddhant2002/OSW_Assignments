#include<stdio.h>
#include <math.h>
int check(int);
int cal(int);
int main(){
    int day,month,year;
    printf("Enter the date number\n");
    scanf("%d",&day);
    printf("Enter the month number\n");
    scanf("%d",&month);
    printf("Enter the year number\n");
    scanf("%d",&year);
    int p=check(year);
    int k=0;
    printf("The date is %d/%d/%d\n",day,month,year);
    if(p==1)
    {
       int k=cal(month);
       k+=1;
       k+=day-0;
       printf("The total number of days are %d\n",k);
    }
    else
    {
       int k=cal(month);
       k+=day-0;
       printf("The total number of days are %d\n",k);
    }
}

int check(int year)
{
   if((year %400 == 0) || (year%4==0 && year%100!=0))
         return 1;
   else
         return 0;
}
int cal(int month)
{
   int p=0;
   switch(month)
   {
      case 1:
      break;
      case 2:
      p+=31;
      break;
      case 3:
      p+=59;
      break;
      case 4:
      p+=90;
      break;
      case 5:
      p+=120;
      break;
      case 6:
      p+=151;
      break;
      case 7:
      p+=181;
      break;
      case 8:
      p+=212;
      break;
      case 9:
      p+=243;
      break;
      case 10:
      p+=273;
      break;
      case 11:
      p+=304;
      break;
      case 12:
      p+=334;
      break;
   }
   return p;
}

Output
Enter the date number
23
Enter the month number
10
Enter the year number
2004
The date is 23/10/2004
The total number of days are 297