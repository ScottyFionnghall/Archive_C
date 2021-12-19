#include <stdio.h>
#include <stdlib.h>
/*
Write a C program to find the larger value from two positive 
integer values that is in the range 20..30 inclusive, or return 0 if 
neither is in that range.
*/
int main(int argc, char const *argv[])
{
	int a,b;
	puts("C program to find the larger value from two positive integer values that is in the range 20..30 inclusive");
	scanf("%i",&a);
	scanf("%i",&b);

	if ((a > 0) && (b > 0)){
		if(((a >= 20) && (a <= 30))&&((b >= 20) && (b <= 30))){
			if (a > b){
				printf("%i\n",a);
			} else{
				printf("%i\n",b);
			}
		} else {
			puts("0");
		}
	} else {
		puts("ERROR!Negative integers");
	}

	return 0;
}
