#include<stdio.h>
int main()
{
    int num,rev,r;
    printf("Enter th number \n");
    scanf("%d",&num);
    rev=0;
    while (num>0)
    {
        r=num%10;
        rev=rev*10+r;
        num = num/10;
    }
    while (rev>0)
    {
        r=rev%10;
        printf("%d\n",r);
        rev=rev/10;
    }
    return 0;
}
