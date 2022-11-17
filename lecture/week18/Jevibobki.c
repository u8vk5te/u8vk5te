#include <stdio.h>
#include <string.h>
#include <time.h>


int main() {
	int rand_value;
	int try;

	char jevi [200][200];

	try = 0;

	while(1) {
		scanf("%s", jevi[try]);
		if (!strcmp(jevi[try],"q")) {
			break;
		}
		try++;
	}

	int i;

	for (i = 0; i < try; i++) {
		printf("Jevi[%d] : %s\n", i, jevi[i]);
	}

	printf("\n\nwow %s\n",jevi[rand()%try]);
}
