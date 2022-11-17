#include <stdio.h>
int main(){
	int a;
	int b;
	scanf("%d",&a);
	if(a<-10) {printf("n<-10");

	}
	else if (a < 0) {printf("-10<=n<0");
	}
	else if (a <10) {printf("0<=a<10");

	}
	else{printf("a>=10\n");}
	return 0;
}

