#include <stdio.h>
int physics, chemistry, maths, total;
float per = 0;
int totalmarks()
{

    total = physics + chemistry + maths;
    return total;
}
float percentage()
{

    per = totalmarks() / 3.0;
    return per;
}
int main()
{

    printf("enter the marks of chemistry:");
    scanf("%d", &chemistry);
    printf("enter the marks of maths:");
    scanf("%d", &maths);
    printf("enter the marks of physics:");
    scanf("%d", &physics);

    printf("total is %d", totalmarks());
    printf("\npercentage is %.2f", percentage());
}