#include <stdio.h>

void fibonacci()
{

	int i, N, num, num1 = 0, num2 = 1;
	printf("How many numbers of fibonacci series you want to print?\n");
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{

		printf(",%d", num1);
		num = num1 + num2;
		num1 = num2;
		num2 = num;
	}
	printf("\n");
}

int fibonacci1()
{

	int i, N, num, num1 = 0, num2 = 1;
	printf("How many numbers of fibonacci series you want to print?\n");
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{

		printf(",%d", num1);
		num = num1 + num2;
		num1 = num2;
		num2 = num;
	}

	return num1;
}

int main()
{

	fibonacci();
	fibonacci1();

	return 0;
}