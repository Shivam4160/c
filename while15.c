#include<stdio.h>
int main()
{
	
	int i=1,j=1,n;
	printf("Enter value of n:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",j);
		j*=2;
		i++;

	}
	
	return 0;
}