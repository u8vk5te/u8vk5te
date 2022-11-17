#include <stdio.h>


int strlen (char* str);
int strcmp (char* str1, char* str2);
char* strcpy (char* des, char* src);
char* strcat (char* des, char* src); // Homework!!



int main () {
char z[200];
char x[200];
	scanf("%s %s",z,x);
	printf("strcat(z+x)=%s\n\n\n\n\n",strcat(z,x));
}
int strlen (char* str) {
	int w;
	for (w = 0; w < 200; w++){
		if(*(str+w)==0){
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

char* strcat (char* des, char* src) {
	int no,mo;
mo=strlen(des);
	for (no = 0; strlen(src) >= no; no++){
		des[mo + no] = src[no];
	}
	return des;		
}
