#include<stdio.h>
int main()
{

    int n=4;

    for (int i = 1; i <= n+1; i++)
    {
        printf(".");

    }
    printf("\n");
    
    for (int j = 1; j <=n; j++)
    {
        printf(".");

        for (int k = 1; k <= n; k++)
        {
            printf(" ");
        
        }
        printf(".\n");
        
    }
    for (int i = 1; i <= n+1; i++)
    {
        printf(".");

    }

    return 0;
}