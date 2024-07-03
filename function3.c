#include<stdio.h>
void sum(int a ,int b)
{

    int total1;
    total1 = a+b;
    printf("sum of a and b is %d",total1);
}
int sum1(int a ,int b)
{

    int total2;
    total2 = a+b;
    return total2;

}

int maim()
{
    int a , b,total3;

    printf("enter the value of a :");
    scanf("%d", &a);
    printf("enter the value of b :");
    scanf("%d", &b);
    sum(a,b);

    total3=sum1(a,b);
    printf("sum of a and b is %d",total3);

    return 0;
}