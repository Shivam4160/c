#include<stdio.h>
int main()
{
    int Bsalary ;
    float Gsalary;
    
        printf("Please enter your Basic salary:");
        scanf("%d",&Bsalary);
    if(Bsalary<=5000)
    {
        
        Gsalary = Bsalary + (Bsalary*8/100) +  (Bsalary*20/100);
        printf("your Gross salary is %.2f ", Gsalary);
        
        
    }
    else if(Bsalary<=10000)
    {
        
        Gsalary = Bsalary + (Bsalary*12/100) +  (Bsalary*30/100);
        printf("your Gross salary is %.2f ", Gsalary);
        
    }
    else if(Bsalary<=15000)
    {
        
        Gsalary = Bsalary + (Bsalary*15/100) +  (Bsalary*40/100);
        printf("your Gross salary is %.2f ", Gsalary);
        
    }
    else 
    {
        
        Gsalary = Bsalary + (Bsalary*20/100) +  (Bsalary*50/100);
        printf("your Gross salary is %.2f ", Gsalary);
        
    }

    return 0;
}