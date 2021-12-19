#include <stdio.h>

struct preferences{
	const char *food;
	int exercise_hours;
};

struct fish{
	const char *name;
	const char *species;
	int teeth;
	int age;
	struct preferences care;
};

void catalog(struct fish f){
	printf("%s - это %s с %i зубами. Ему %i года\n. Его любимая еда это %s и он любит трудится только %i часов.",f.name,f.species,f.teeth,f.age,f.care.food,f.care.exercise_hours);
}

void lable(struct fish f){
	printf("Кличка:%s\nРазновидность:%s\n%i года, %i зубов\n",f.name,f.species,f.age,f.teeth);
}

int main(int argc, char const *argv[])
{	
		struct fish snappy = {"Зубастик","пиранья",69,4,{"Мясо",5.2}};
		catalog(snappy);
		lable(snappy);
	return 0;
}