#include <stdio.h>

int main () {

	int num1 = 20;
	int num2 = 30;
	const int* ptr = &num1;

	//*ptr = 30;
	ptr = &num2;

}
