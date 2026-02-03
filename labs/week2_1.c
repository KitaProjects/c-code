#include <stdio.h>

int main(void) {
	int a, b, c, pass;

	printf(
		"Please input 3 three integers, following these rules:\n"
		"(Inclusively) A and B must be between 0 and 10 and C between 0 and 5.\n"
	);

	scanf("%i%i%i", &a, &b, &c);

	pass = 1;

	if (a < 0 || a > 10) {
		printf("[ERR]: 'A' can only be between 0 and 10.\n");
		pass = 0;
	} if (b < 0 || b > 10) {
		printf("[ERR]: 'B' can only be between 0 and 10.\n");
		pass = 0;
	} if (c < 0 || c > 5) {
		printf("[ERR]: 'C' can only be between 0 and 5.\n");
		pass = 0;
	} if (pass) {
		printf("%i\n", a + b + c);
	}

	return 0;
}
