/*
Write a C program to check two given integers whether 
either of them is in the range 100..200 inclusive.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{	
	puts("C program that checks if integer in the range 100..200");
	int inp;
	puts("Type the integer:");
	scanf("%i",&inp);
	if (inp >= 100 && inp <= 200){
		printf("%i is within 100 and 200\n",inp );
	} else {
		printf("%i is not within 100 and 200\n",inp );
	}
	return 0;
}
