#include <stdio.h>

int main() {
	int a;
	int b;
	char c;
	int d;

	b = 1;
	scanf("%d",&a);

	while (b < a+1) {
		c = '*';
		d=0;
		while (d<b) {
			printf("%c",c);
			d++;
		}
			
		printf("\n");
		b++;
	}

		return 0;
	

}


