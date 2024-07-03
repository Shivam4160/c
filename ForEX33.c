#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=15;)
	{
		
		for(j=i;j<=i+k;j++)
		{
			
			printf("%d\t",j);
			
		}
		
		printf("\n");
		k++;
		i+=k;
	}
	
	
	return 0;
}