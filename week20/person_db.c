#include <stdio.h>


typedef struct {
	char name[20];
	int score;
	int weight;
} Person;

void printAllPeople (const Person* people, int len);
void getInfoByName (const char * name);
int main () {
	Person people [100];
	int total = 0;



	while (1) {
		char cmd;
		printf("Insert, Print, Get or Stop [i/p/g/s]\n");
		scanf(" %c", &cmd);

		if (cmd == 'i') {
			printf("[name] [score] [weight]\n");
			scanf ("%s %d %d", people[total].name, 
					&people[total].score, &people[total].weight);
			total ++;
		} else if (cmd == 'p') {
		} else if (cmd == 'g') {
		} else if (cmd == 's') {
			break;
		} else {
			printf ("Try Again\n");
		}

	}


}
