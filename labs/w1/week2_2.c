#include <stdio.h>

int main(void) {
	int hi, med, lo, mark;
	hi = med = lo = 0;

	scanf("%i", &mark);
	while (mark != 0) {
		if (mark >= 85) {
			hi++;
		} else if (mark >= 60) {
			med++;
		} else {
			lo++;
		}

		scanf("%i", &mark);
	};

	printf(
		">=85:%i\n"
		"60-84:%i\n"
		"<60:%i\n",
		hi, med, lo 
	);

	return 0;
}
