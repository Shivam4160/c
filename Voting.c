#include<stdio.h>
int main()
{
	int Age;
	
	 printf("Pelase enter your Age:");
	 scanf("%d",&Age);
	 
	if(Age<18)
	{
		printf("You are under 18, so you are not eligible for voting.");
		
	}
	else
	{
		printf("You are eligible for voting.\nIf you want to apply for your voter id you will need these proof.\n\t1.Recent passport size photo\n\t2.Proof of address\n\t3.Proofodage\n\t4.Identity proof");
	}
	
	
	return 0;
}
	