#include<stdio.h>
int main()
{
	int i,j;
	for(i=11;i<55;i+=10)
	{
		
		for(j=i;j<=i+4;j++)
		{
			
			printf("%d\t",j);
			
		}
		
		printf("\n");
		
	}
	
	
	return 0;
}