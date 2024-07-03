#include<stdio.h>
int main()
{
	
	char Char ;
		printf("Enter a character : ");
		scanf("%c",&Char);
	
	if (Char>='a')
	{
		
		printf("%c", Char - 32);
		
	}
	else
	{
		
		printf("%c", Char+32);
		
	}
	
	
	
	
	
	return 0;
}