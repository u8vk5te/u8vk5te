#include <stdio.h>

int main() {
	int number1;
	int t;
	int p;

	t=1;
	scanf("%d", &number1);

       for (t=1;t<10;t++) {
		p= t * number1;
		printf("%d * %d = %d\n", number1, t, p);
	}

	return 1972;
}
