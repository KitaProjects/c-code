#include <stdio.h>

/* Functions cannot be declared within other functions */
int foo()
{
	return 1;
}

int main()
{
	int x = foo();

	printf("%d", x);

	return 0;
}
