#include<stdio.h>
int main()
{
	int i=65;
	while(i<=89)
	{
		int j=i;
		while(j<=i+4)
		{
			printf("%c\t",j);
			j++;
		}
		printf("\n");
		i+=5;
	}
	
	return 0;
}