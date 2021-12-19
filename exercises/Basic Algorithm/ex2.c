/*
Write a C program to get the absolute difference between n and 51. 
If n is greater than 51 return triple the absolute difference.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int inp,absdif;
	puts("C program to get the absolute difference between n and 51.\n");
	puts("Type the n:\n");
	scanf("%i",&inp);
	if(inp > 51){
		absdif = (51 - inp) * 3;
		printf("The absolute difference between %i and 51 is %i.\nIt's tripled because your number is grater than 51\n",inp,absdif);
	} else {
		absdif = 51 - inp;
		printf("The absolute difference between %i and 51 is %i.\n",inp,absdif);
	}
	
	return 0;
}