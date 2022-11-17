#include<stdio.h>
int main(){
	int a[5];
	int i;
	scanf("%d %d %d %d %d",a,a+1,a+2,a+3,a+4);
	printf("%d %d %d %d %d",*(a+4),*(a+3),*(a+2),*(a+1),*a);
	return 0;
}
