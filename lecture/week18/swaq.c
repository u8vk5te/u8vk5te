#include <stdio.h>
void swaq(int*n1,int*n2){
	int h=*n1;
	*n1=*n2;
	*n2=h;
}
int main () {
	int num1 = 20, num2 =10;
	printf("num1: %d, num2: %d\n",num1,num2);
	swaq(&num1,&num2);
	printf("num1: %d, num2: %d\n",num1,num2);
}
