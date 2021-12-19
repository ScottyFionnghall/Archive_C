#include <stdio.h>

typedef struct 
{
	const char *name;
	const char *species;
	int age;
} turtle;

void happy_birthday(turtle *t){
	t->age = t->age + 1;
	printf("С Днём Рожденья, %s\n! Теперь тебе %i лет!\n",t->name,t->age);
}

int main(int argc, char const *argv[])
{
	turtle myturtle = {"Тортилла","Кожистая черепаха",99};
	happy_birthday(&myturtle);
	printf("%s прожила %i лет\n",myturtle.name,myturtle.age );
	return 0;
}