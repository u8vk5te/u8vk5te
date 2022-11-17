#include <stdio.h>

int main () {
	int array [] = {3, 6, 9, 2, 4, 5,1972};

	printf("size of array : %ld\n", sizeof(array));
	printf("num of array : %ld\n", sizeof(array)/sizeof(int));


	int index = 0;
	for (index = 0; index < sizeof(array)/sizeof(int) ; ++index) {
		printf("array [%d] : %d\n", index, array[index]);
	}

	

}
