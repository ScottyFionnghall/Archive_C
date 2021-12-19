/*
Write a C program to check whether three given integer values
are in the range 20..50 inclusive. Return true if 1 or more of 
themare in the said range otherwise return false.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int inp1,inp2,inp3;
	scanf("%i",&inp1);
	scanf("%i",&inp2);
	scanf("%i",&inp3);
	if ((inp1 >= 20 && inp1 <= 50)||(inp2 >= 20 && inp2 <= 50) ||(inp3 >= 20 && inp3 <= 50)){
		puts("true");
	} else {
		puts("false");
	}
	return 0;
}