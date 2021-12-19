 /*
 Write a C program to check whether two given integers are 
 in the range 40..50 inclusive, or they are both in the range 50..60 inclusive. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int inp1,inp2;
	scanf("%i",&inp1);
	scanf("%i",&inp2);

	if ((inp1 >= 40 && inp1<=50)||(inp2 >= 40 && inp2 <= 50))
	{
		puts("First or second integer are in range of 40..50");
	} else if ((inp1 >= 50 && inp1<=60)&&(inp2>=50 && inp2 <=60)){
		puts("Both integers are in range 50..60");
	} else {
		puts("smthng worng");
	}
	return 0;
}