#include<stdio.h>
int main()
{
	
	int i=2,j=1,n,k=1;
	printf("Enter value of n:");
	scanf("%d",&n);
	while(i<=n+1)
	{
		printf("%d\n",k);
		j*=2;
		k=j*i;
		i++;
		

	}
	
	return 0;
}