#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=65;i<=79;)
	{
		
		for(j=i;j<=i+k;j++)
		{
			if(k%2==0)
			{
				
				printf("%c\t",j);
				
			}
			else
			{
				
				printf("%c\t",j+32);
				
			}
			
		}
		
		printf("\n");
		k++;
		i+=k;
	}
	
	
	return 0;
}