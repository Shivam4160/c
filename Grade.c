#include<stdio.h>
int main()
{
    int maths ,physics ,chemistry , english , computer , total;
    float Per ;
    char grade;
    
        printf("Please enter your marks of maths:");
        scanf("%d",&maths);
        
        printf("Please enter your marks of physics:");
        scanf("%d",&physics);
        
        printf("Please enter your marks of chemistry:");
        scanf("%d",&chemistry);
        
        printf("Please enter your marks of english:");
        scanf("%d",&english);
        
        printf("Please enter your marks of computer:");
        scanf("%d",&computer);
        
        total = maths + physics + chemistry + english + computer;
        Per = total/5.0;
        
        
    if(Per>=75)
    {
        
        printf("congratulations! your grade is A and you got %.2f%% ", Per);
        
        
    }
    else if(Per>=60)
    {
        
        printf("congratulations! your grade is B and you got %.2f%% ", Per);
        
    }
    else if(Per>=45)
    {
        
        printf("congratulations! your grade is C and you got %.2f%% ", Per);
        
    }
    else if(Per>=35)
    {
        
        printf("congratulations! your grade is D and you got %.2f%% ", Per);
        
    }
    else 
    {
        
        printf("Better luck next time, You faild exam.\n\t\tTry again next year");
        
    }

    return 0;
}