#include<stdio.h>
int main(){
	double a[5];
	double*parr;
	int g;
	parr=a;
	for(g=0;g<5;g=g+1){scanf("%lf",parr+g);}

	
	for(g=0;g<5;g=g+1){
	printf("\n%f",2*a[g]);}
	printf("sum:%f\n\n\n\n\n",2*(a[0]+a[1]+a[2]+a[3]+a[4]));
return 0;

}
