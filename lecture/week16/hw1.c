#include<stdio.h>//hehesgregdg0pn
void printArray(int *parr, int arr_len) {
	int p=0;
	printf("[%s] ", __func__);
	for (; p < arr_len; p++) {
		printf("%d ", parr[p]);
	}
	printf("\n");

}

int main(){
	int i;
	int arr[5];
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	
	i=0;
	int max,min,sum;
    sum = 0;	
	max = min = arr[0];	

	for (i = 0; i < 5; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}

		if (min > arr[i]) {
			min =  arr[i];
		}

		sum = arr[i] + sum;
	}
			
0////Gg
//	printArray(arr, sizeof(arr)/sizeof(int));
	printf("min:%d\nmax:%d\nsum:%d\n\n\n\n\n\n",min,max,sum);
}
