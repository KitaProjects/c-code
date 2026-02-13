#include <stdio.h>

int main(void) {
	int a, b, n;

	scanf("%d%d%d", &a, &b, &n);

	int remainder = a % b;

	/* emulating division by hand */
	int i, digit, carry;
	for (i=0; i<n; i++) {
		carry = remainder * 10;
		digit = carry / b;
		remainder = carry % b;
	}

	printf("%d\n", digit);

	return 0;
}
