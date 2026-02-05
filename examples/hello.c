#include <stdio.h>

/* define a constant NO = SIGN */
#define PI 3.14

int main() {
	printf("Hello world!\n");

	/* a will be assigned to some rubbish like 50501405 but compiler won't complain */
	int a;
	
	const int r = 2;

	a = PI * (r * r);

	if (r == 2) {
		printf("This condition works\n");
	}

	/* output function like scanf */
	printf("The radius of the circle is %d.\n", r);
	printf("The area of the circle is %d.\n", a);

	/* % [flags][minimum-field-width][.precision] Type
	 * [flags] optional, controls the characters added to a string
	 * e.g. below code outputs | 12|12 | so spaces in between
	 * [minimum-field-width] optional, minimum number of chars in the results string
	 * e.g. below code outputs |  ABC| so 2 spaces at start
	 * [.precision] optional, controls number of digits after decimal point
	 * e.g. below code outputs 3.100
	 */
	printf("|%3d|%-3d|\n", 12, 12);
	printf("|%5s|\n","ABC");
	printf("%.3f\n", 3.1);

	/* %c | single char
	 * %s | string
	 * %d | decimal integer
	 * %o | an octal (base 8) integer
	 * %x | lowercase hexadecimal (base 16) integer
	 * %X | uppercase hexadecimal
	 * %f | floating point number for floats
	 * %e | floating point number in scientific notation
	 * %% | % character
	 */

	return 0;
}
