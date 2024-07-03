#include<stdio.h>
int main()
{
	
	int i , j=0 , n;
	printf("Enter value of N:");
	scanf("%d",&n);
	
	
	for( i=1 ; i<=n ; i++)
	{
		if(i%2==0)
		{
			
			j+=i;
		
		}
		else
		{
			
		}
	}
	
	printf("%d",j);
	
	return 0;
}