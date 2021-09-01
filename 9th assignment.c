//generate a series of 1!+2!+3!.....n!
#include<stdio.h>
int main()
{
    int i,j,num,f,sum=0;
    printf("Enter the n term : ");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        f=1;
        for ( j = 1; j <= i; j++)
        {
            f=f*j;
        }
        sum=sum+f;
    }
    printf("sum of the series : %d",sum);
    return 0;
}
