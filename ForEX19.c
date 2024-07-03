#include<stdio.h>
int main()
{
	int i, N ,num,num1=0,num2=1;
	printf("How many numbers of fibonacci series you want to print?\n");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		if(i==0)
		{
			
			printf("0");
			
		}
		else if(i==1)
		{
			
			printf(",1");
			
		}
		else
		{
			
			num=num1+num2;
			num1=num2;
			num2=num;
			printf(",%d",num);
			
		}
	}	
	

	
	
	return 0;
}
