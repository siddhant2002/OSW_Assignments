
#include<stdio.h>

int main()
{
    printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
    float p,q;
    printf("Enter beginning odometer reading=> ");
    scanf("%f",&p);
    printf("Enter ending odometer reading=> ");
    scanf("%f",&q);
    printf("You traveled %.1f miles. At $0.35 per mile,\n",(q-p));
    printf("your reimbursement is $%.2f.",(q-p)*(0.35));
    return 0;
}


Output
MILEAGE REIMBURSEMENT CALCULATOR
Enter beginning odometer reading=> 13505.2
Enter ending odometer reading=> 13810.6
You traveled 305.4 miles. At $0.35 per mile,
your reimbursement is $106.89.