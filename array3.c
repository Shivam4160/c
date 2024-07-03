#include<stdio.h>
int main()
{
	int subject[5],total;
	float per;

	for(int i=1;i<=3;i++)
	{
		total=0;
		printf("Student%d\n",i);
		for(int j=0;j<5;j++)
		{
		
			printf("Enter the marks of Subject%d:",j+1);
			scanf("%d",&subject[j]);
			
			total+=subject[j];
			
		}
		
		per=total/5.0;
		printf("Total of student%d's marks is %d\n",i,total);
		printf("Percentage of student%d is %.2f\n",i,per);
		
		if(per>80)
		{
			
			printf("Gerde of student%d is A.\n",i);
			
		}
		else if(per>60)
		{
			
			printf("Gerde of student%d is b.\n",i);
			
		}
		else if(per>40)
		{
			
			printf("Gerde of student%d is c.\n",i);
			
		}
		else
		{
			
			printf("Student%d is Fail.\n",i);
			
		}
		
	}


	return 0;
}