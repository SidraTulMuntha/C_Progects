#include<stdio.h>
int main()
{
float basic,da,hra,gs,pf;
float net_salary;
    printf("enter basic salary :\n");
    scanf("%f",&basic);
    da=(basic*25)/100;
    hra=(basic*15)/100;
    gs=basic+da+hra;
    pf=(gs*10)/100;
    net_salary=gs-pf;
    printf("net saraly is = %.2f",net_salary);
    return 0;
}
