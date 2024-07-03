#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=65;i<=69;i++)
	{
		
		for(j=i;j>=i-k;j--)
		{
			
			printf("%c\t",j);
			
		}
		
		printf("\n");
		k++;
	}
	
	
	return 0;
}