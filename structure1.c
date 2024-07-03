#include <stdio.h>
struct student
{
    int enroll;
    char name[20];
    char class;
    int marks[3];
};

int main()
{

    struct student rnum[3];

    for (int i = 0; i < 3; i++)
    {

        rnum[i].enroll = i + 1;
        printf("enter the name of student%d:", i + 1);
        scanf("%s", &rnum[i].name);
        printf("enter the class of student%d:", i + 1);
        scanf("%s", &rnum[i].class);
        for (int j = 0; j < 3; j++)
        {

            printf("enter the marks of subject%d", i + 1);
            scanf("%d", &rnum[i].marks[j]);
        }

        printf("the name of student%d is %s\n", i + 1, rnum[i].name);
        printf("the enrollment number of student%d is %d\n", i + 1, rnum[i].enroll);
        printf("the class of student%d is %c\n", i + 1, rnum[i].class);
        for (int k = 0; k < 3; k++)
        {
            printf("the marks of subject%d is %d.\n", i + 1, rnum[i].marks[k]);
        }
    }

    return 0;
}