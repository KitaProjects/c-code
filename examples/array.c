#include <stdio.h>

int main(void) {
	/* Valid because all but left most dimesnsion must be specified
	 * Compiler can compute leftmost
	 */
	int twoD[][3] = {{1, 2, 3}, {1, 2, 3}};
	int arr[10];

	int i;

	for(i=0; i<10; i++) {
		arr[i] = i + 100;
	}

	for(i=0; i<10; i++) {
		printf("Element[%d] = %d\n", i, arr[i]);
	}

	return 0;
}
