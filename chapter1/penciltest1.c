#include <stdio.h>

int main()
{
/*
  Первый вопрос
*/
int card_count = 11;
if (card_count > 10)
  puts("нормально)");
/*
  Второй вопрос
*/
int c = 10;
while (c > 0){
  puts("Я не должен писать код в виде классов");
  c -= 1;
}
/*
Третий вопрос
*/
char ex[20];
puts("Введите имя вашей девушки:");
scanf("%19s", ex);
printf("Дорогая %s. \n\n\t С тобой покончено.\n", ex);
/*
Четвёртый вопрос

*/
char suit = 'H';


switch(suit){
  case 'C':
    puts("Clubs");
    break;
  case 'D':
    puts("Diamonds");
    break;
  case 'H':
    puts ("Hearts");
    break;
  default:
    puts("Spades");
          }
}
