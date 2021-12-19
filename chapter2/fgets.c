#include <stdio.h>

int main(int argc, char const *argv[])
{
	char food[5];
	fgets(food,sizeof(food),stdin);
	printf("%s\n",food );
	return 0;
}