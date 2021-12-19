/*
Write a C program to check two given integers, 
and return true if one of them is 30 or if their sum is 30.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int inp1,inp2,sum;
	puts("C program that checks two given integers,\n and returns true if one of them is 30 or if their sum is 30");
	puts("Type first integer:\n");
	scanf("%i",&inp1);
	puts("Type second integer:\n");
	scanf("%i",&inp2);

	if(inp1 == 30 || inp2 == 30)
	{
		puts("True");
	} else if (inp1 + inp2 == 30){
		puts("True");
	} else {
		puts("False");
	}

	return 0;
}