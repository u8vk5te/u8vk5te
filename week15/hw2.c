#include<stdio.h>
int i;
double d;
char c;
int*pi=&i;
double*pd=&d;
char*pc=&c;

int main(){
	scanf("%d %lf %c",pi,pd,pc);
	printf("i:%d,%p\nd:%f,%p\nc:%c,%p\n\n",i,pi,d,pd,c,pc);
	printf("i+1: %d\nd+1:%f\nc+1:%c\n\n\n",*pi+1,*pd+1,*pc+1);
	printf("size of pi:%d \nsize of pd:8\nsize of pc:8\n", sizeof(pi));
}	
