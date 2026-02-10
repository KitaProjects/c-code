#include <stdio.h>

/* Functions cannot be declared within other functions */
int foo(int fighter)
{
	return fighter;
}

int main()
{
	int i = foo(21);

	printf("%d\n", i);

	return 0;
}
