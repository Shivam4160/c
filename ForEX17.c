#include<stdio.h>
int main()
{
	int i, N ,j=1,k;
	printf("Enter number N:");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		if(i==1)
		{
			
			printf("1\n");
			
		}
		else 
		{
			
			j*=2;
			k=j*i;
			printf("%d\n",k);
			
		}
	}	
	

	
	
	return 0;
}
