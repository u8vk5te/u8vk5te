#include<stdio.h>
int ppp(int n){
	if (n==1){return 1;}return ppp(n-1)+n;
}
int main(){
	int a;
	scanf("%d",&a);
	printf("\n%d\n",ppp(a));
}
