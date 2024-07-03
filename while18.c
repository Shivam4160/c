#include<stdio.h>
int main()
{
	int i=1,num,num1=0,num2=1,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d,",num1);
		num=num1+num2;
		num1=num2;
		num2=num;
		i++;
	}
	
	
	return 0;
}