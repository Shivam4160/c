#include<stdio.h>
int main()
{
	int array[3][3],i,j;
	
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			
			printf("Enter value of element at (%d,%d)",i,j);
			scanf("%d",&array[i][j]);
			
		}
		
	}
	
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			
			if(array[i][j]!=0)
			{
				
				printf("%d",array[i][j]);
				
			}
			else
			{
				
				printf(" ");
				
			}
			
			
		}
		
		printf("\n");
		
	}
	
	
	
	return 0;
}