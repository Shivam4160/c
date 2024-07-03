#include<stdio.h>
int main()
{
	int i=1;
	while(i<=25)
	{
		int j=i;
		while(j<=i+4)
		{
			printf("%d\t",j);
			j++;
		}
		printf("\n");
		i+=5;
	}
	
	return 0;
}