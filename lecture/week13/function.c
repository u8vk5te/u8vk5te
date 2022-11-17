#include <stdio.h>


int fibonachi (int n);

int main () {
	int i = 8956;

	printf("%d's fibonachi value is %d\n", i, fibonachi (i));


}

int fibonachi (int n) {
	int result;

	// base condition 1
	if (n == 0)
		return 0;

	// base condition 2
	if (n == 1)
		return 1;


	result = fibonachi(n-1) + fibonachi(n-2);

	return result;
}



