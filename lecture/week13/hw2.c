#include<stdio.h>

int addtotal(int n){
	if (n == 1) {
		return 1;
	}
	return n+addtotal(n-1);
}
int multotal(int n){
	if (n == 1) {
		return 1;
	}
	return n*multotal(n-1);
}
int main(){
	int a;
	scanf("%d",&a);
	printf("\naddtotal:%d\ngmul:%d\n",addtotal(a),multotal(a));
	return 0;
}
