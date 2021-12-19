#include <stdio.h>

int main(int argc, char const *argv[])
{	
	char ID[10];
	int hours = 0;
	int slryhr = 15000;
	scanf("%s",&ID);
	scanf("%i",&hours);
	
	printf("Employees ID: %s\n Salary = U$ %i\n",ID,hours*slryhr);
	return 0;
}