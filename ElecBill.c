#include<stdio.h>
int main()\
{
	float unit , Bill ;
	  printf("Please enter amount of unit: ");
	  scanf("%f", &unit);
	  
	  if(unit<=100)
	  {
		  
		  Bill = unit*0.60 + 50;
		  
		  
	  }
	  else if (unit <=200)
	  {
		  
		  Bill = unit*0.80 + 50;
		 
		  
	  }
	  else if (unit <=300)
	  {
		  
		  Bill = unit*0.90 + 50;
		 
	  }
	  else 
	  {
		  
		  printf("Bill can't be not found");
		  
	  }
	  
	  if(Bill>300)
	  {
		  Bill += Bill*15/100.0;
		  printf("Your Bill is %.2f Rupees", Bill);
	  }
	  else 
	  {
		  printf("\nYour Bill is %.2f Rupees", Bill); 
	  }
	  
	  

	return 0;
} 