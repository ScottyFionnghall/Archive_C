#include <stdio.h>
#include "encrypt.h"
int main(int argc, char const *argv[])
{
	char msg[80];
	while (fgets(msg,80,stdin)){
		puts("sex");
		encrypt(msg);
		printf("%s\n",msg);
	}
	return 0;
}