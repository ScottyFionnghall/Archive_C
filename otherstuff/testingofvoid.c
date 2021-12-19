#include <stdio.h>
void complain(){
	puts("are you охуел?");
}
void praise(){
	puts("спасибо спасибо спасибо спасибо");
}
int main(){
	char anwser[4];
	puts("Будете ли вы повышать зарплату Иванову?");
	scanf("%s",&anwser);
	if (anwser[0] == 'Y' || anwser[0] == 'y'){
		praise();

	}else{ 
		complain();
	}
}