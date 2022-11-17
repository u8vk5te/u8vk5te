#include <stdio.h>


int main () {
	int a,b,c,min,max;

	scanf("%d %d %d", &a, &b, &c);
	
	if (b>a && b>c) {
		max = b;
		if (a<c) {
			min = a;
		} else {
			min = c;
		}
	} 

	if (a>b&&a>c) {
		max=a;
		if(b>c){
			min=c;
		}else{
			min=a;
		}
	}
	if(c>b&&c>a) {
		max=c;
		if(b>a){
			min=a;
		}else{
		min=b;	
		}
	}

	printf("min: %d\nmax: %d\n",min,max);
}
