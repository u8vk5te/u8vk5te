#include <stdio.h>

int strlen (char* str);

int main () {
	char mes[200];

	scanf("%s", mes);

	printf("Number of mes is %d\n", strlen(mes));

}

int strlen (char* str) {
	int w;
	for (w = 0; w < 200; w++){
		if(*(str+w)==NULL){
			break;
		}
	}
	return w;
}
