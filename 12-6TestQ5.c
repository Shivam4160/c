#include<stdio.h>
int main()
{ 
 	int Sec , Hours , Minutes , Sec1 , Sec2;
 	
 	printf("Enter Seconds for convert: ");
 	scanf("%d" , &Sec);
 	
 		Sec1 = Sec%3600;
 		Sec2 = Sec1%60;
 	
 		Hours = Sec/3600;
 		Minutes = Sec1/60;
 	
 	printf("%d:%d:%d ", Hours , Minutes , Sec2);
 
   return 0;
  
}