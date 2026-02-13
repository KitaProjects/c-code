#include <stdio.h>

int main(void) {
	int a, b, n;

	scanf("%d%d%d", &a, &b, &n);

	int remainder = a % b;

	/* emulating division by hand */
	int i, digit, carry;
	for (i=0; i<n; i++) {
		// bring down 0
		carry = remainder * 10;
		// how many times b goes into new number
		digit = carry / b;
		// new remainder for the next decimal
		remainder = carry % b;
	}

	printf("%d\n", digit);

	return 0;
}
