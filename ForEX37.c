#include<stdio.h>
int main()
{
	int i,j,k,a;
	for(i=65;i<=79;)
	{
		
		for(j=i;j<=i+k;j++)
		{
			if(!(a%2==0))
			{
				
				printf("%c\t",j);
				
			}
			else
			{
				
				printf("%c\t",j+32);
				
			}
			a++;
		}
		a=0;
		printf("\n");
		k++;
		i+=k;
	}
	
	
	return 0;
}