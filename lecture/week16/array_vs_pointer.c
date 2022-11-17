#include <stdio.h>

int main () {
	int arr[] = {5, 10, 15};
	int* parr = arr;

	printf("%d %d %d %d\n", arr[0], *arr, parr[0], *parr);
	printf("%p %p %p %p\n", arr, parr, arr+1, parr+1);


	printf("%d %d %d %d\n", arr[1], *(arr+1), parr[1], *parr++);
	//printf("%d %d %d %d\n", arr[1], *(arr+2), parr[1], *parr++);
}
