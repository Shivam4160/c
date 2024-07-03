#include<stdio.h>
int main()
{
	
	float x , y;
	printf("Enter the value of x:");
	scanf("%f",&x);
	printf("enter the value of y:");
	scanf("%f",&y);
	if (x<2000 || x>3000)
	{
		printf("x=%.2f",x);
	}
	
	if (100<y&&y<500)
	{
		printf("\ny=%.2f",y);
	}
	
	
	return 0;
	
}