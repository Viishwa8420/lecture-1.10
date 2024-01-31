// a Program to find the sum of a first and the last digit of a number.
#include<stdio.h>
main()
{
	int first, last, n, sum;
	
	printf("Enter value for n : ");
	scanf("%d",&n);
	
	last = n % 10 ;
		printf("last digit of a number : %d \n",last);
	
	while(n >= 10){
		n= n/10;
		}
		first = n;
		printf("first digit of a number : %d \n",first);
		
	sum = first + last;
		printf("sum of a first and the last digit of a number : %d",sum);
}
