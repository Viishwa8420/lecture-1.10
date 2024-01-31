//a Program to print all alphabets from a to z by skipping 3 alphabets using do while loop.
#include<stdio.h>
main()
{
    char alpha='a';
	do{
    	printf("%c \t",alpha);
		alpha+=4;
//			 alpha++;
//   		 alpha++;
//   		 alpha++;
//   		 alpha++;
	}while(alpha<='z');
}
