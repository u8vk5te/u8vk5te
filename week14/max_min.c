#include <stdio.h>

int main () {
	int array [] = {3, 6, 9, 2, 4, 5,1972};int max,min;
	max = array[0];
	min = array[0];

	for (int i = 1; i < sizeof(array)/sizeof(int) ; i++) {
		if(array[i] > max) {
			max = array[i];
		}
		if (array[i] < min) {
			min = array[i];
		}

	}

	printf("max:%d\tmin:%d\n",max,min);
	return 0;
}
