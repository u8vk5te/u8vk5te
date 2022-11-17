#include <stdio.h>


int main () {
	int a,b,c,min,max;

	scanf("%d %d %d", &a, &b, &c);

	if (a > b) {
		max = a;
		min = b;
	} else {
		max = b;
		min = a;
	}

	if (c > max) {
		max = c;
	}
	if (c < min) {
		min = c;
	}

	printf("min: %d\nmax: %d\n",min,max);
}
