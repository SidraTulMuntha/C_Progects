//Program to find the  value of y for a particular value of n .
#include<stdio.h>
int main()
{
int a,b,x,n,y;
    printf("Enter the value of a,b and x : \n");
    scanf("%d%d%d",&a,&b,&x);
    printf("Enter the value n : \n");
    scanf("%d",&n);
switch(n)
{
    case 1: y=a*x%b;
    printf("the value of y =%d",y);
    break;
   case 2: y=(a*x*x)+(b*b);
    printf("the value of y =%d",y);
    break;
   case 3: y=a-b*x;
    printf("the value of y =%d",y);
    break;
    case 4: y=a+b/x;
    printf("the value of y =%d",y);
    break;
    default :printf("wrong input");
}    

    return 0;
}
