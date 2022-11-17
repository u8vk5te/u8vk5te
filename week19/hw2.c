#include<stdio.h>
int main(){
	
	struct person {
		char name[16];
		int age;


	};
	struct person si;
	scanf("%s %d", si.name, &si.age);
	printf("name: %s\nage: %d\n",si.name,si.age);

}
