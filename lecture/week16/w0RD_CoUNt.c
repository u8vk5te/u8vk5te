#include<stdio.h>
int main(){
	char arr[100];
	scanf("%s",arr);
	int p=0;
	while (arr[p]!=NULL)
	{
		p=p+1;
	}
		printf("%d\n",p);
		return 0;
	}


