#include <stdio.h>
#include <string.h>
//#include <stdlib.h>


// atoi : array to integer
// atof : array to floating point value

int atoi (char* src);
int power(int a, int b);

int main() {
	char str1 [20] = "-625";

	int i = atoi(str1);
		
	printf("%s %d\n", str1, i);
}

int atoi (char* src) {
	int ret = 0;
	int idx = 0;
	int sign = 1;
	int size = strlen(src);


	// Number is under zero
	if (src[0] == '-') {
		sign = -1;
		idx = 1;
	}

	for (;idx < size; idx ++) {

		if (src[idx] == NULL) {
			break;
		}

		ret = ret + power (src[idx] - '0', size - idx);


	}

			
	return ret * sign;
}
int power(int a, int b) {

	int ret = a;
	int i;

	for (i = 0 ; i < b - 1; i++) {
		ret = ret * 10;
	}

	return ret;

}
