#include<stdio.h>
int main()
{
	char Char;
	printf("Enter a character : ");
	scanf("%c",&Char);
	
	
	
	/*other mathod 
	make two more variable(lovercase, upercase)
	lovercase = (Char=='a' || Char=='e' || Char=='i' || Char=='o' || Char=='u')
	upercase=(Char=='A' || Char=='E' || Char=='I' || Char=='O' || Char=='U')
	
	if (Char==lovercase || Char==upercase)
		
	then continue
	*/
	
	
	
	if(Char=='a' || Char=='e' || Char=='i' || Char=='o' || Char=='u' || Char=='A' || Char=='E' || Char=='I' || Char=='O' || Char=='U')
	{
		
		printf("Entered character is Vowel");

		
	}
	else 
	{
		
		printf("Entered character is not Vowel");

	}
	
	
	return 0;
}