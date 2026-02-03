#include <stdio.h>

int main(void) {
	int hi, med, lo, mark;
	hi = med = lo = 0;

	do {
		scanf("%i", &mark);

		if (mark >= 85) {
			hi++;
		} else if (mark >= 60) {
			med++;
		} else if (mark != 0) {
			lo++;
		}

	} while (mark != 0);

	printf(
		">=85:%i\n"
		"60-84:%i\n"
		"<60:%i\n",
		hi, med, lo 
	);

	return 0;
}
