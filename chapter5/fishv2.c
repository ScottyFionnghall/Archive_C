#include <stdio.h>

struct exercise
{
	const char *description;
	float duration;
};

struct meal
{	
	float weight;
	const char *ingredients;
};

struct preferences
{	struct meal food;
	struct exercise exercise;
	
};

struct fish
{
	const char *name;
	const char *species;
	int teeth;
	int age;
	struct preferences care;	
};

void lable(struct fish f){
	printf("Кличка %s\nРазновидность:%s\n%i года,%i зубов\n",f.name,f.species,f.age,f.teeth);
	printf("Давать %2.2f кг %s и разрешать %s на протяжении %2.2f часов\n",f.care.food.weight,f.care.food.ingredients,f.care.exercise.description,f.care.exercise.duration);
}

int main(int argc, char const *argv[])
{
	struct fish snappy = {"Зубастик","пиранья",4,69,{{0.09,"Мяса"},{"купаться",7.50}}};
	lable(snappy);
	return 0;
}