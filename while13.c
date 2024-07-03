#include<stdio.h>
int main()
{
	
	int i=0,j=0,n;
	printf("Enter value of n:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			
			j+=i;
			
		}
		
		i++;
		
	}
	printf("%d\n",j);
	
	
	
	return 0;
}
