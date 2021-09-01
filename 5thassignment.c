//Program to receive marks of the Physics , Maths and Chemistry from the user and check its eligibility for course .
#include<stdio.h>
void main()
{
int p,m,c;
    printf("Enter the marks score by the student in Physics , Maths and chemisrty :");
    scanf("%d%d%d",&p,&m,&c);
    printf("\ntotal marks in physics and maths :%d",p+m);
    printf("\ntotal marks in physics , chemisrty and maths :%d\n",p+c+m);
    if(p>40)
    {
        if(c>50)
        {
            if(m>60)
            {
                if((p+m)>150 || (p+c+m)>200)
                {
                    printf("the candidate is eligible for the admision");
                }
                 else
                {
                printf("the candidate is not eligible for the admision");   
                }
            }
              else
              {
              printf("the candidate is not eligible for the admision");
              }
        }
            else
            {
            printf("the candidate is not eligible for the admision");
            } 
    }
         else
        {
        printf("the candidate is not eligible for the admision");
        }     
    
    
}
