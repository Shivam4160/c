#include <stdio.h>

void factorial()
{

    int N, fact = 1;
    printf("Enter the number you want factorial of :");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {

        fact *= i;
    }

    printf("%d\n", fact);
}

int factorial1()
{

    int N, fact = 1;
    printf("Enter the number you want factorial of :");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {

        fact *= i;
    }

    return fact;
}

int main()
{

    factorial();
    printf("%d", factorial1());
    return 0;
}