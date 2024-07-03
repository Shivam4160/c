#include <stdio.h>
int main()
{
	int i, j, k, n = 1;
	for (i = 5; i >= 1; i--)
	{

		for (k = 0; k < n; k++)
		{

			if (k != 0)
			{

				printf("\t");
			}
		}
		for (j = i; j >= 1; j--)
		{

			printf("%d\t", j);
		}
		n++;
		printf("\n");
	}

	return 0;
}