#include<stdio.h>
int combination(int n,int r){
	// error case
	if (n < r) {
		return -1;
	}

	if (r == 0 || r == n) {
		return 1;
	}
	if (r == 1 || r == n-1) {
		return n;
	}

	return combination(n-1,r-1) + combination(n-1,r);
}



int main(){
	int a,b;
	int result;
	scanf("%d %d", &a, &b);
	result = combination(a,b);

	if (result != -1) {
		printf("%d\n",result);
	} else {
		printf("바1보\n");
	}
}
