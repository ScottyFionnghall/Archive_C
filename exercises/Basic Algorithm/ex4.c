/*
Write a C program to check a given integer and 
return true if it is within 10 of 100 or 200.
*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int inp;
	puts("C program that checks a given integer and\nreturn true if it is within 10 of 100 or 200.");
	puts("Type an integer:");
	scanf("%i",&inp);
	if(abs(inp - 100)<= 10||abs(inp - 200)<=10){
		puts("True");
	} else {
		puts("False");
	}
	return 0;
}