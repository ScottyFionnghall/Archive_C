#include <stdio.h>

char question(int i){
	char qarray[4] = "test";
 return qarray[i];
}

int main(){
	char q1 = question(0);
	printf("%s\n",q1);
	return 0;
}