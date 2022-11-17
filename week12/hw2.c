#include<stdio.h>

int main() {
	char letter;

	while (1) {
		int a;
		scanf("%c",&letter);	

		// disable to printf new line
		if (letter == '\n') {
			continue;
		}
			
		printf("-> ");
		if (letter >= 'A' && letter <= 'Z') {
			//letter is large alphabet
			printf("%c\n",letter + 'a' - 'A');
		} else if (letter >= 'a' && letter <= 'z') {
			//letter is small alphabet
			printf("%c\n", letter - 'a' + 'A');
		} else if (letter >= '0' && letter <= '9'){
			printf("%d\n",letter - '0');
		} else {
			printf("exit\n");
			return 0;
		}

	
	}
	return 0;
}
