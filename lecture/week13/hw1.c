#include<stdio.h>
int add(int p,int q){
	return p+q;
}
int sub(int p,int q){
	return p-q;
}
int mul(int p,int q){
return p*q;
}
double div(int p,int q){
	return (double) p/q;
}
int mod(int p,int q){
	return p%q;
}
void printMsg(){
	printf("completed\n");

}
int main(){
	int a,b;
	scanf("%d\n%d",&a,&b);
	printf("\nsum:%d\neifference:%d\nproduct:%d\ndivision:%lf\nremainder:%d\n",add(a,b),sub(a,b),mul(a,b),div(a,b),mod(a,b));
printMsg();
	return 0;
}
