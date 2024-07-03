#include<stdio.h>
int main()
{
	int array[3][3],i,j,dig=0,UrTri=0,LrTri=0;
	
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			
			printf("Enter value of element at (%d,%d)",i,j);
			scanf("%d",&array[i][j]);
			
			if(i<j)
			{
				
				UrTri+=array[i][j];
				
			}
			else if(i==j)
			{
				
				dig+=array[i][j];
				
			}
			else
			{
				
				LrTri+=array[i][j];
				
			}
			
		}
		
	}
	
	printf("sum of diagonal %d.\n",dig);
	printf("sum of upper triangle is %d.\n",UrTri);
	printf("sum of lower triangle is %d.\n",LrTri);
	
	
	return 0;
}