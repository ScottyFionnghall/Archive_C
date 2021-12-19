#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a[10],i;
	for (i=0;i <10;i++){
	scanf("%i",&a[i]);
	}
	for (i=0;i <10;i++){
		if((a[i]==1)&&(a[i+1]==2)&&(a[i+2]==3)){
			puts("cool");
		}
	}
	return 0;
}