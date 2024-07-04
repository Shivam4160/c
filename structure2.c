#include <stdio.h>
struct info
{

    char name[20];
    int rate, quantity, amount;
    float discount, billamount, netbill, get;

};

int main()
{
    int n;
    printf("Enter the number of costumer:");
    scanf("&d",&n);

    struct info bil[n];

    for (int i = 0; i < n; i++)
    {
        
        printf("Enter the name of costumer:");
        scanf("&s",bil[i]);

    }
    

    return 0;
}
