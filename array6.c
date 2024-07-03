#include<stdio.h>
int main()
{
	int i,n,Sum=0;
	printf("Enter size of array.");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		
		printf("Enter %d'th position element of array.",i);
		scanf("%d",&arr[i]);
		
		Sum+=arr[i];
		
	}
	
	
	printf("Sum of all element is %d",Sum);
	
	
	return 0;
}