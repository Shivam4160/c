#include<stdio.h>
int main()
{
    int i;
    char string[25];
 

    printf("Enter string:\n");
    gets(string);

    for(i=0;string[i]!='\0';i++)
    {}

    
    for(string[i]='\0';i>=0;i--)
    {

        printf("%c",string[i]);

    }



    return 0;
}