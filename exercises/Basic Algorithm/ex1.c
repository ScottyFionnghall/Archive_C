#include <stdio.h>
/*
Write a C program to compute the sum of the two given integer values. 
If the two values are the same, then return triple their sum. 
Expected Output:
3
12

*/
int main(int argc, char const *argv[])
{
	int first,second,sum;
	scanf("%i",&first);
	scanf("%i",&second);
	if (first == second)
	{	
		sum = (first + second)*3;
		printf("\nSum of %i and %i is %i.It's triple because numbers are equal\n",first,second,sum);
	} else {
		sum = first + second;
		printf("\nSum of %i and %i is %i\n",first,second,sum);
	}

	return 0;
}