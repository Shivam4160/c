#include<stdio.h>
int main()
{
	int i=1;
	while(i<=5)
	{
		int k=4;
		while(k>=i)
		{
			printf(" ");
			k--;
		}
		int j=1;
		while(j<=i)
		{
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}
	
	return 0;
}