#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,d,root1,root2,realpart,imagepart;
    printf("Enter the coefficient of a ,b and c :\n"); 
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4*a*c;
    //condition for real and diffrent root.
    if (d>0.0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf",root1,root2);
    }
    //condition for real and equal root.
    else if(d = 0.0)
    {
        root1 = root2 = -b/(2*a);
        printf("root1=root2=%.2lf",root1);
    }
    //if roots are not real 
    else 
    {
    realpart = -b/(2*a);
    imagepart=sqrt(-d)/(2*a);
    printf("root1 =%.2lf + %.2lf i and root2 = %.2lf - %.2lf i", realpart,imagepart,realpart,imagepart);
    }
    return 0;
}
