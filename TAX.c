#include<stdio.h>
int main()
{
	
	int salary;
	float tax;
	printf("Enter your salary:");
	scanf("%d",&salary);
	if(salary>0)
	{	
		if(salary<=2500)
		{
		
			tax = salary*0/100;
		
		}
		else if (salary>2500 && salary<=5000)
		{
		
			tax = salary*10/100;
		
		}
		else if (salary>5000 && salary<=10000)
		{
		
			tax = salary*20/100;
		
		}
		else 
		{
		
			tax = salary*30/100;
		
		}
	}
	
	
	printf("Your tax if %.2f",tax);
	
	return 0;
}