(a) If item is nonzero, then multiply product by item and save the result in product ; otherwise, skip
the multiplication. In either case, print the value of product.
Ans - 
if(item!=0)
{
    product=product*item;
    printf("%d\n",product);
}
else
{
    printf("%d\n",product);
}

(b) Store the absolute difference of x and y in y , where the absolute difference is ( x - y ) or (y - x ),
whichever is positive. Do not use the abs or fabs function in your solution.
Ans - 
if(x>y)
{
    y=x-y;
}
else
{
    y=y-x;
}


(c) If x is 0 , add 1 to zero count. If x is negative, add x to minus sum. If x is greater than 0 , add x to
plus sum.
Ans - 
if(x==0)
{
    zero_count++;
}
else if(x<0)
{
    minus_sum+=x;
}
else
{
    plus_sum+=x;
}