#include <stdio.h>

int main () {

	char str1[] = "string1";
	char *str2 = "string2";

	str1 = "strin1";
	str2 = "string22";

	str1[0] = 'X';
	str2[0] = 'X';
}
