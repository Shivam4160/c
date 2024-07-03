#include<stdio.h>
int main()
{
    int i,j;
    char string1[25];
    char string2[25];
    char string3[50];

    printf("Enter string1:\n");
    gets(string1);
    printf("Enter string2:\n");
    gets(string2);
    
    for(i=0;string1[i]!='\0';i++)
    {

        string3[i]=string1[i];

    }
    for(j=0;string2[j]!='\0';j++)
    {

        string3[i]=string2[j];
        i++;
    }
    string3[i]='\0';

    printf("string3 is ");
    puts(string3);

    


    return 0;
}