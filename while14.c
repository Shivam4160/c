#include<stdio.h>
int main()
{
	
	int i=1,j=1,n;
	printf("Enter value of n:");
	scanf("%d",&n);
	while(i<=n)
	{
		
		j=i*i;
		i++;
		printf("%d\n",j);

	}
	
	return 0;
}