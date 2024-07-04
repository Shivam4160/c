#include <stdio.h>
int main()
{

    int a, b;

    printf("enter the value of a");
    scanf("%d", &a);
    printf("enter the value of b");
    scanf("%d", &b);

    printf("before swaping:\n");

    printf("b is %d\n", b);
    printf("a is %d\n", a);

    int *c = &a, *d = &b;
    *c += *d;
    *d = *c - *d;
    *c -= *d;
    
    
    printf("after swaping:\n");

    printf("b is %d\n", b);
    printf("a is %d\n", a);

    return 0;
}