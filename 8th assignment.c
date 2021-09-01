//Program to find whether the number is Armstrong number .
#include<stdio.h>
#include<math.h>
int main()
{
int num,t1,t2,remainder,arm,count;
    printf("Enter a digital \n");
    scanf("%d",&num);
    t1=num;
    t2=num;
    arm=0;
    count=0;
    while (t1>0)
    {
        t1=t1/10;
        count=count+1;
    }
    while (t2>0)
    {
        remainder=t2%10;
        arm=arm+pow(remainder,count);
        t2= t2/10;
    }
    if (arm=num)
    {
        printf("%d is Armstrong number",num);
    }   else
    {
        printf("%d is not Armstrong number",num);
    }
    
}
