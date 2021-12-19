#include <stdio.h>
#include "totaller.h"
float total = 0.0;
int count = 0;
short tax_percent = 6;

int main(int argc, char const *argv[])
{
	float val;
	printf("Цена блюда: ");
	while (scanf("%f",&val) == 1){
		printf("Итоговая цена на текущий момент: %.2f\n",add_with_tax(val));
		printf("Цена блюда: ");
	}
	printf("\nИтоговый счёт: %.2f\n", total);
	printf("Количество блюд: %hi\n",count);
	return 0;
}
float add_with_tax(float f)
{
float tax_rate = 1 + tax_percent / 100.0;
total = total + (f * tax_rate);
count = count + 1;
return total;
}
