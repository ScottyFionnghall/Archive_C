#include <stdio.h>

int go_south_east(int *lat,int *lon){
	*lat = *lat - 1;
	*lon = *lon + 1;

}

int main(int argc, char const *argv[])
{
	int latitude = 32;
	int logitude = -64;
	go_south_east(&latitude,&logitude);
	printf("\n%i %i",latitude,logitude );
	return 0;
}