#include <stdio.h>

int strlen (char* str);
int strcmp (char* str1, char* str2);
char* strcpy (char* des, char* src);


int main () {
	char mes1[200];
	char mes2[200];
	char mes3[200];

	scanf("%s", mes1);
	scanf("%s", mes2);

	printf("Number of mes1 is %d\n", strlen(mes1));
	printf("Number of mes2 is %d\n", strlen(mes2));

	if (!strcmp (mes1, mes2)) {
		printf("mes1 and mes2 are same\n");
	} else {
		printf("mes1 and mes2 are not same\n");
	}

	printf("-------- Before -------\n");
	printf("mes1 : %s\n", mes1);
	printf("mes3 : %s\n", mes3);

	strcpy(mes3, mes1);
	printf("mes3 is copied from mes1\n");
	printf("-------- After --------\n");
	printf("mes1 : %s\n", mes1);
	printf("mes3 : %s\n", mes3);


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

int strcmp (char* str1, char* str2) {
	int u;
	int size = strlen(str1);

	if (size != strlen(str2)) {
		return 1;
	}

	for(u = size; u!=0; u--){
		//printf("%s\n",__func__);
		if(*(str1+u-1) != *(str2+u-1)){
			return 49;
		}
	}
	return 0;
}

char* strcpy (char* des, char* src) {
	int no;
	for(no=0;no<strlen(src);no++){
		des[no]=src[no];
	}	
	des[no] = NULL;
	return des;
}
