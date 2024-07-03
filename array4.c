#include<stdio.h>
int main()
{
	int i,j,n,SumOdd=0,SumEven=0;
	printf("Enter size of array.");
	scanf("%d",&n);
	int arr[n];
	for(j=0;j<n;j++)
	{
		
		printf("Enter %d'th position element of array.",j);
		scanf("%d",&arr[j]);
		
	}
	for(i=0;i<n;i++)
	{
		
		if(i%2==0)
		{
			
			SumEven+=arr[i];
			
		}
		else
		{
			
			SumOdd+=arr[i];
			
		}
		
	}
	printf("Sum of Even position element is %d\n",SumEven);
	printf("Sum of Odd position element is %d",SumOdd);
	
	
	return 0;
}