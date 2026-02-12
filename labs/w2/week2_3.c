#include <stdio.h>

int main(void) {
	int c, init, step, fin;

	scanf("%d%d%d", &init, &step, &fin);

	for (c=init; c<=fin; c+=step) {
		int far = ( c * (9.0/5.0) ) + 32;

		printf("C=%d->F=%d\n", c, far);
	}

	return 0;
}
