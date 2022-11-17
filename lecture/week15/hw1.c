#include<stdio.h>
int main(){
	int i;
	int* pi;
	scanf("%d",&i);
	pi = &i;
	printf("%d\n",*pi);
	printf("%d\n",*pi+10);
	return 0;

}
