#include <stdio.h>

void printArray(int *parr, int arr_len) {
	int p=0;
	for (; p < arr_len; p++) {
		printf("%d\n", parr[p]);
	}

}

int main () {
	int arr[] = {5, 10, 15, 1, 3, 8};
	printArray(arr, sizeof(arr)/sizeof(int));
	return 0;
}
