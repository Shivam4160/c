#include<stdio.h>
int main()
{
	int i=65,k=0;
	while(i<90)
	{
		printf("%c\t",i);
		
		if(k<6)
		{
			
			printf("%c\t",i+34);
			
		}
		k++;
		i+=4;
	}
	
	
	return 0;
}