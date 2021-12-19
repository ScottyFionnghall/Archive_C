#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//function for rolling a dice
int rolladice(int dice, int size)
{
	srand(time(0));
	dice = rand() % size;
	if (dice == 0) 
		dice++;
	return dice;
}

int questions(int number)
{
	char question[][500] = {
	/*1*/	"What is your full name?",
	/*2*/	"What do you do at your occupation?\nCondense the verb in your answer into a single -er noun. (e.g. if you are a sheep farmer, your answer will be “farmer”)",
	/*3*/	"What was your first pet’s specific species/breed? If you never had a pet, please answer with an animal you wish you owned.",
	/*4*/	"What’s your most embarrassing childhood memory?\nCondense this story into two words",
	/*5*/	"What is the object you’d least like to be stabbed by?",
	/*6*/	"What is something you are good at? (Verb ending in -ing)",
	/*7*/	"How many carrots do you believe you could eat in one sitting, if someone, like, forced you to eat as many carrots as possible?",
	/*8*/	"What is your greatest intangible fear? (e.g. death, loneliness, fear itself)",
	/*9*/	"What is your greatest tangible fear? (e.g. horses)",
	/*10*/	"What is the last thing you did before starting this worksheet?",
	/*11*/	"What condition is your body currently in? (single word answer)",
	/*12*/	"Favorite state of matter?",
	/*13*/	"A word your name kind of sounds like? (e.g. Brian -> Brain)",
	/*14*/	"What is your Zodiac sign?",
	/*15*/	"If you had to define your personality in one word, what would it be?",
	/*16*/	"Who is your favorite film character? (NOTE: must be played by Kurt Russell)",
	/*17*/	"What is the last word of the title of your favorite Kubrick film?",
	/*18*/	"What is the first word in the title of your favorite Joy Division album?",
	/*19*/	"What is a scientific term you picked up from listening to NPR once?",
	/*20*/	"What is a piece of military hardware you think looks cool even though war is bad?",
	/*21*/	"What is something you’d enjoy watching Mads Mikkelsen do?\nPlease condense into one word.",
	};
	printf("%s\n",question[number]);
}
int main()
{

	int d6_1 = rolladice(d6_1, 6);

	if (d6_1 == 6)
	{
		printf("You have 1 name + 6 other alternate names.\n");
	}
	else
	{
		printf("You have 1 name.\n");
	}

	char s2_q1[100];
	questions(0);
	scanf("\n%[^\n]s", &s2_q1);
	char s2_q2[100];
	questions(1);
	scanf("\n%[^\n]s", &s2_q2);
	char s2_q3[100];
	questions(2);
	scanf("\n%[^\n]s", &s2_q3);
	char s2_q4[100];
	questions(3);
	scanf("\n%[^\n]s", &s2_q4);
	char s2_q5[100];
	questions(4);
	scanf("\n%[^\n]s", &s2_q5);
	char s2_q6[100];
	questions(5);
	scanf("\n%[^\n]s", &s2_q6);
	char s2_q7[100];
	questions(6);
	scanf("\n%[^\n]s", &s2_q7);
	char s2_q8[100];
	questions(7);
	scanf("\n%[^\n]s", &s2_q8);
	char s2_q9[100];
	questions(8);
	scanf("\n%[^\n]s", &s2_q9);
	char s2_q10[100];
	questions(9);
	scanf("\n%[^\n]s", &s2_q10);
	char s2_q11[100];
	questions(10);
	scanf("\n%[^\n]s", &s2_q11);
	char s2_q12[100];
	questions(11);
	scanf("\n%[^\n]s", &s2_q12);
	char s2_q13[100];
	questions(12);
	scanf("\n%[^\n]s", &s2_q13);
	char s2_q14[100];
	questions(13);
	scanf("\n%[^\n]s", &s2_q14);
	char s2_q15[100];
	questions(14);
	scanf("\n%[^\n]s", &s2_q15);
	//section 3
	char s3_q16[100];
	questions(15);
	scanf("\n%[^\n]s", &s3_q16);
	char s3_q17[100];
	questions(16);
	scanf("\n%[^\n]s", &s3_q17);
	char s3_q18[100];
	questions(17);
	scanf("\n%[^\n]s", &s3_q18);
	char s3_q19[100];
	questions(18);
	scanf("\n%[^\n]s", &s3_q19);
	char s3_q20[100];
	questions(19);
	scanf("\n%[^\n]s", &s3_q20);
	char s3_q21[100];
	questions(20);
	scanf("\n%[^\n]s", &s3_q21);
	//section 4
	//THE-MAN condition
	char lastcon[100];
	int d4_1 = rolladice(d4_1, 4);
	puts("THE -MAN CONDITION: Roll a d4. Use this table to determine whether you have this condition:");
	if (d4_1 == 4)
	{
		printf("You've rolled a %i!\nYou have this condition. Your last name will include the suffix -man.\n If your name already has -man at the end of it, I guess\n you’re just going to have -manman at the end of your name.", d4_1);
		char mancondition[] = "man";
		strcpy(lastcon,mancondition);
	}
	else
	{
		printf("You've rolled a %i!\nYou do not have this condition", d4_1);
		char mancondition[] = "";
		strcpy(lastcon,mancondition);
	}
	//THE CONDITION CONDITION
	char firstcon[100];
	int d8_1 = rolladice(d8_1,8);
	puts("\nTHE CONDITION CONDITION: Roll a d8. Use this table to determine your what this condition will do to you:");
	printf("You've rolled a: %i\n",d8_1 );
	
	if (d8_1 < 6){
		puts("You do not have this condition.\n");
		char conditioncondition[] = "";
		strcpy(firstcon,conditioncondition);
	} else if (d8_1 == 6){
		puts("You’re big. Your name must have “Big” at the beginning of it.\n");
		char conditioncondition[] = "Big";
		strcpy(firstcon,conditioncondition);
	} else if (d8_1 == 7){
		puts("You are older than you once were.\n Your name must have “Old” at the beginning of it");
		char conditioncondition[] = "Old";
		strcpy(firstcon,conditioncondition);
	} else if (d8_1 == 8){
		printf("You are how you currently are. The word '%s' will be added to the beginning of your name.",s2_q11);
		char conditioncondition[100];
		strcpy(firstcon,s2_q11);
	}
	//THE CLONE CONDITION
	int d12_1 = rolladice(d12_1,12);
	puts("\nTHE CLONE CONDITION: Roll a d12. Use this table to determine if you have this condition:");
	printf("You've rolled a: %i\n",d12_1);

	if (d12_1 == 12){
		puts("You are a clone of someone else, or you have been brainwashed\n into becoming a mental doppelganger of someone else. Find \nsomeone who has completed this worksheet and replace half of\n your Kojima name with half of their Kojima name.");
	
	}	else{
		puts("You do not have this condition.");
		
	}
	//THE KOJIMA CONDITION
	int d100_1 = rolladice(d100_1,100);
	puts("\nTHE KOJIMA CONDITION: Roll a d100 (or two d10s, using one as the 1s place and the other as the 10s place.) Use this table to determine if you have this condition:");
	
	printf("You've rolled a %i\n", d100_1);
	if (d100_1 == 69){
		puts("Oh no. You are Hideo Kojima. Hideo Kojima created you and is also you. You are the man who created himself and there is nothing you can do about it. You’re in Kojima’s world—your world—and that’s  just the breaks, pal. Stop this worksheet now. You’re Hideo Kojima. Go do the things that Hideo Kojima does.");
		return 0;
	} else {
		puts("You do not have this condition.");
		
	}
	//Section 5
	puts("\nYour NORMAL NAME:");
	printf("%s %s%s",firstcon,s2_q1,lastcon);
	puts("\nYour OCCUPATIONAL NAME:");
	int d4_2 = rolladice(d4_2,4);
	if (d4_2 == 1){
	printf("%s %s %s%s",firstcon,s2_q15,s2_q2,lastcon);
		}
		else if (d4_2 == 2){
	printf("%s %s %s%s",firstcon,s2_q6,s2_q2,lastcon);
		}
		else if (d4_2 == 3){
	printf("%s %s %s%s",firstcon,s2_q13,s2_q2,lastcon);
		}
		else if (d4_2 == 4){
	printf("%s %s %s%s",firstcon,s3_q16,s2_q2,lastcon);
		}
	puts("\nYour HORNY NAME: ");
	int d4_3 = rolladice(d4_2,4);
	if (d4_3 == 1){
		printf("%s %s %s%s",firstcon,s2_q12,s2_q3,lastcon);
	}
	if (d4_3 == 2){
		printf("%s Naked %s%s",firstcon,s2_q3,lastcon);
	}
	if (d4_3 == 3){
		printf("%s %s %s%s",firstcon,s2_q6,s2_q3,lastcon);
	}
	if (d4_3 == 4){
		printf("%s %s %s%s",firstcon,s2_q14,s2_q3,lastcon);
	}
	puts("\nYour THE NAME: ");
	int d4_4 = rolladice(d4_3,4);
	if (d4_4 == 1){
		printf("The %s %s%s",firstcon,s2_q8,lastcon);
	}
	if (d4_4 == 2){
		printf("The %s %s%s",firstcon,s2_q9,lastcon);
	}
	if (d4_4 == 3){
		printf("The %s %s%s",firstcon,s2_q4,lastcon);
	}
	if (d4_4 == 4){
		printf("The %s %s%s",firstcon,s3_q20,lastcon);
	}
	puts("\nYour COOL NAME: ");
	int d6_2 = rolladice(d6_2,6);
	if (d6_2 == 1){
		printf("%s %s %s%s",firstcon,s3_q21,s3_q17,lastcon);
	}
	if (d6_2 == 2){
		printf("%s %s %s%s",firstcon,s3_q21,s3_q18,lastcon);
	}
	if (d6_2 == 3){
		printf("%s %s %s%s",firstcon,s3_q21,s3_q19,lastcon);
	}
	if (d6_2 == 4){
		printf("%s %s %s%s",firstcon,s3_q21,s2_q6,lastcon);
	}
	if (d6_2 == 5){
		printf("%s %s %s%s",firstcon,s3_q21,s2_q8,lastcon);
	}
	if (d6_2 == 6){
		printf("%s %s %s%s",firstcon,s3_q21,s2_q13,lastcon);
	}
	puts("\nYour VIOLENT NAME:");
	int d4_5 = rolladice(d4_4,4);
	if (d4_5 == 1){
		printf("%s %s%s",s3_q19,s2_q5,lastcon);
	}
	if (d4_5 == 2){
		printf("%s %s%s",s2_q12,s2_q5,lastcon);
	}
	if (d4_5 == 3){
		printf("%s %s%s",s3_q20,s2_q5,lastcon);
	}
	if (d4_5 == 4){
		printf("%s %s%s",s2_q9,s2_q5,lastcon);
	}
	puts("\nYour NAME THAT LACKS SUBTEXT:");
	printf("%s %s%s",firstcon,s2_q10,lastcon);
	printf("\nWrite SOMETHING and press ENTER key to Continue\n");  
	char exit[100];
	scanf("%s",exit); 
}