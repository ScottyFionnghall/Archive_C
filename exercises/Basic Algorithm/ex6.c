/*
Write a C program to check if one given 
temperatures is less than 0 and the other is greater than 100.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{	
	puts("C program that checks if one of them less than 0 and other greater than 100 and returns true\n");
	int temp1,temp2;
	puts("Give a temperature:");
	scanf("%i",&temp1);
	puts("Give a second temperature:");
	scanf("%i",&temp2);

	if (temp1 >= 100 && temp2 <= 100){
		puts("true\n");
	} else if (temp1 <= 100 && temp2 >= 100){
		puts("true\n");
	}else{
		puts("false\n");
	}
	return 0;
}