#include <stdio.h>

// define a constant NO = SIGN
#define PI 3.14

int main() {
	printf("Hello world!\n");

	// a will be assigned to some rubbish like 50501405 but compiler won't complain
	int a;
	
	const int r = 2;

	a = PI * (r * r);
	
	printf("The radius of the circle is %d.\n", r);
	printf("The area of the circle is %d.\n", a);

	return 0;
}
