#include<stdio.h>
int main()
{
	int arr1[5],arr2[6];
	
	printf("For arr1\n");
	
	for(int i=0;i<5;i++)
	{
		
		printf("Enter element of possition %d:",i);
		scanf("%d",&arr1[i]);
		
	}
	
	printf("For arr2\n");

	for(int i=0;i<5;i++)
	{
		
		printf("Enter element of possition %d:",i);
		scanf("%d",&arr2[i]);
		
	}
	printf("\narr1\n");
	for(int i=0;i<5;i++)
	{
		
		printf("Element of possition %d is: %d\n",i,arr1[i]);
		
	}
	printf("\narr2\n");
	for(int i=0;i<5;i++)
	{
		
		printf("Element of possition %d is: %d\n",i,arr2[i]);
		
	}
	
	
	
	return 0;
}