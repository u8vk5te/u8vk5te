#include <stdio.h>


int main () {

	int* a;
	char* b;
	float* c;
	double* d;


	printf("%ld %ld %ld %ld\n", sizeof(a),sizeof(b), sizeof(c), sizeof(d));

	char ch1 = 'a';
	char* pch1 = &ch1;

	printf("value of ch1 : %d\n", ch1);
	printf("address of ch1 : %p\n", &ch1);
	printf("value of pch1 : %p\n", pch1);
	printf("point value of pch1 : %c\n", *pch1);

	*pch1 = 'b';
	printf("point value of pch1 : %c\n", *pch1);
	printf("value of ch1 : %c\n", ch1);
}


