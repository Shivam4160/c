#include<stdio.h>
int main()
{
	int a,b=0;
	for(a=65;a<=90;a+=4)
	{
		
		printf("%c\t",a);
		b=a+34;
			if(b<122)
			{
				
				printf("%c\t",b);
				
			}
		
	}
	
	
	return 0;
	
}