/*
Write a C program to check if two given non-negative 
integers have the same last digit.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{	
	int a,b;
	scanf("%i",&a);
	scanf("%i",&b);

	if ((a > 0) && (b > 0)){
		if((a%10)==(b%10)){
			puts("This numbers have the same last digit");
		} else {
			puts("This numbers dose not have same last digit");
		}
	} else {
		puts("error. negative integers");
	}
	return 0;
}
