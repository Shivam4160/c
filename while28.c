#include<stdio.h>
int main()
{
	int i=11;
	while(i<=55)
	{
		int j=i;
		while(j<=i+4)
		{
			printf("%d\t",j);
			j++;
		}
		printf("\n");
		i+=10;
	}
	
	return 0;
}