#include<stdio.h>
int main()
{
	int i, N ,j=1;
	printf("Enter number N:");
	scanf("%d",&N);
	for(i=0;i<=N;i++)
	{
		if(i==0)
		{
			
			printf("1\n");
			
		}
		else 
		{
			
			j*=2;
			printf("%d\n",j);
			
		}
	}	
	

	
	
	return 0;
}
