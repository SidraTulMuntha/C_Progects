#include<stdio.h>
void main()
{
   int n,div,flag;
   printf(" enter a number :");scanf("%d",&n);
    
    for(int n=2;n<300;n++)
    {
        
    flag=1;
    for ( div = 2; div <=n/2 ; div++)
    {
        if(n%div==0)
    flag=0;
    break;
    }
    }
    if(flag==1)//flag true prime no
    {
        printf("%d is a prime number \n",n);
    }
    else//false not prime
    {
       printf("%d is not a prime number \n",n);
    }
}
