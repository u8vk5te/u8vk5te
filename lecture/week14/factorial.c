#include<stdio.h>

int factorial(int n);
int permutation (int n, int r);
int combination (int n, int r);
int fff(int n){
	//base condition
	if (n==1) {
		return 1;
	}

	return n + fff(n-1);
}


int main(){
	int a;
	scanf("%d",&a);
	printf("%d\n",factorial(a));
}

int factorial(int n){
	//base condition
	if (n==1) {
		return 1;
	}

	return n * factorial(n-1);
}

// nPr : N개중에 r개를 선택하여 순서에 따라 나열하는 경우의 수 ;
int permutation (int n, int r) {
	
}

// nCr : n개중에 r개를 선택하는 경우의 수;
int combination (int n, int r) {
	if (n==r){
		return 1;
	}
	int p,h,q;
	p=1
	

	while (p != r-n+1){
	h=fff(n-r+p)
	p++
}
}
