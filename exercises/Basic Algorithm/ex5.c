/*
Write a C program to check if a given positive number is a multiple of 3 or a multiple of 7
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int inp;
	puts("C progarm that checks if given integer is multiple of 3 or 7");
	puts("Give an integer");
	scanf("%i",&inp);
	if (inp%3 == 0){
		printf("%i is a multiple of 3.\n",inp);
	} else if (inp%7 == 0){
		printf("%i is a multiple of 7.\n",inp );
	} else {
		printf("%i it's not a multiple of 3 or 7\n",inp);
	}
	return 0;
}