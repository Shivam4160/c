#include<stdio.h>
int main()
{
	int array1[3][3],array2[3][3],i,j,total=0;
	printf("array1\n");
	
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			
			printf("Enter value of element at (%d,%d)",i,j);
			scanf("%d",&array1[i][j]);
			total+=array1[i][j];
			
		}
		
	}
	
	printf("array2\n");
	
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			
			printf("Enter value of element at (%d,%d)",i,j);
			scanf("%d",&array2[i][j]);
			total+=array1[i][j];
			
		}
		
	}
	
	printf("total is %d",total);
	
	
	return 0;
}