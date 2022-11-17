#include <stdio.h>
#include <string.h>


typedef struct {
	char name[20];
	int score;
	int weight;
} Person;

void printAllPeople (const Person* people, int len);

/*
 * get information from people database by name
 */
void printInfoByName (const Person* people, int len, const char * name);

int main () {
	Person people [100];
	int total = 0;

	while (1) {
		char cmd;
		printf("Insert, Print, Get or Stop [i/p/g/s] > ");
		scanf(" %c", &cmd);

		if (cmd == 'i') {
			printf("[name] [score] [weight]\n");
			scanf ("%s %d %d", people[total].name, 
					&people[total].score, &people[total].weight);
			total ++;
		} else if (cmd == 'p') {
			printAllPeople(people, total);
		} else if (cmd == 'g') {
			char namae [20];
			printf("[name]\n");
			scanf("%s",namae);
			printInfoByName(people, total, namae);
		} else if (cmd == 's') {
			break;
		} else {
			printf ("Try Again\n");
		}

	}


}

void printAllPeople (const Person* people, int len) {
	printf("[name]\t[score]\t[weight]\n");
	while (len > 0) {
		printf("%s\t%d\t%d\n",
				people[len-1].name,
				people[len-1].score,
				people[len-1].weight);
		len--;
	}
}

void printInfoByName (const Person* people, int len, const char * name) {
	printf("[name]\t[score]\t[weight]\n");
	for(;len>0;len--){
		if(!strcmp(name,people[len].name)) {
			printf("%s\t%d\t%d\n",people[len].name,people[len].score,people[len].weight);
		}
	}
}
