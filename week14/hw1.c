#include<stdio.h>

void printline(int n){
	printf("\n");
		int b;
		b=0;
	while(b<n){
		printf("%d ",b+1);
		b=b+1;
	}
	
}
int main(){
	int a;
	int g=0;
	scanf("%d",&a);
	while(g<a){
		printline(g+1);
		g=g+1;
	} 
	while(g!=0){
		printline(g);
		g=g-1;
	}
}
