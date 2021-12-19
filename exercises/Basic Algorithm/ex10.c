#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int inp1,inp2;
	scanf("%i",&inp1);
	scanf("%i",&inp2);
	if ((inp1<100)&&(inp2<100)){
		if (inp1 > inp2){
			printf("%i is closer to 100 than %i\n",inp1,inp2);
		} else if (inp2 > inp1) {
			printf("%i is closer to 100 than %i\n",inp2,inp1);
		} else {
			puts("ERROR! Integers are equal");
		}
	} else {
		puts("ERROR! Integers are greater than 100");
	}
	return 0;
}