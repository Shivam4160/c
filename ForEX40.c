#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=15;)
	{
		
		for(j=i;j<=i+k;j++)
		{
			if(j%2!=0)
			{
			
				printf("1");
			
			}
			else
			{
				
				printf("0");
				
			}
		}
		
		printf("\n");
		k++;
		i+=k;
		
	}
	
	
	return 0;
}