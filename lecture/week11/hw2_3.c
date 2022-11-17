#include <stdio.h>


int main () {
	int a,b,c,min,max;

	scanf("%d %d %d", &a, &b, &c);

	max = (a > b) ? a : b;
	max = (c > max) ? c: max;

	min = (a > b) ? b : a;
	min = (c > min) ? min: c;

	printf("min: %d\nmax: %d\n",min,max);
}
