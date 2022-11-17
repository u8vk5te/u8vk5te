#include <stdio.h>

int main () {
	char str[50];
	scanf ("%s", str);

	printf("%s\n", str);

	scanf("%c", &str[1]);

	printf("%s\n", str);

return 0;	
}
