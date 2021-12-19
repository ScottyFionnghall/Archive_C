#include <stdio.h>
#include <string.h>
char tracks[][100] = 
{
	"Death Bells - Only You",
	"Второй Этаж Поражает - Профессиональная смерть",
	"Nighy Moves - Denise, Don't Wanna See You Cry",
	"Fugleflugten - Salamander",
	"Man Is Not a Bird - Marble Tears",
};

void find_track(char search_for[])
{
	int i;
	for (i = 0; i < 5;i++){
		if (strstr(tracks[i],search_for))
		{
		printf("Песня номер %i: '%s' начинает играть",i+1,tracks[i]);
		break;
		}
	}
}

int main(int argc, char const *argv[])
{
	char search_for[100];
	printf("Шо хтыте послышатс?\n");
	fgets(search_for,sizeof(search_for),stdin);
	search_for[strlen(search_for) - 1] = '\0';
	find_track(search_for);
	return 0;
}