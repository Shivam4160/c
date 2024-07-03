#include <stdio.h>
void reverse(int n)
{
    int rev = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    printf("%d", rev);
}
int main()
{
    int n;
    printf("enter value of n:");
    scanf("%d", &n);
    reverse(n);

    return 0;
}