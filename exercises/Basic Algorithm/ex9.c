/*
Write a C program to check whether two given integer values are in the range 20..50 inclusive. 
Return true if 1 or other is in the said range otherwise false.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

	int inp1,inp2;
	scanf("%i",&inp1);
	scanf("%i",&inp2);

	if ((inp1 >= 20 && inp1 <= 50)||(inp2 >= 20 && inp2 <= 50)){
		puts("true");
	} else {
		puts("false");
	}
	return 0;
}
	