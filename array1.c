#include<stdio.h>
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		
		printf("Enter element of possition %d:",i);
		scanf("%d",&arr[i]);
		
	}
	for(int i=0;i<5;i++)
	{
		
		printf("Element of possition %d is: %d\n",i,arr[i]);
		
	}
	
	
	
	return 0;
}