//a Program to count the total number of digits in a number.
#include<stdio.h>
main()
{
	int num,digit=0;
	
	printf("Enter any number :");
	scanf("%d",&num);
	 
	 while(num>0)
	 {
	 	num=num/10;
	 	digit++;
	 }
	printf("Total number of digits : %d",digit);
}
