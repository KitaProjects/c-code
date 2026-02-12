#include <stdio.h>

int main(void) {
	float a, b;
	int n;

	scanf("%f%f%d", &a, &b, &n);

	float result = a / b;

	char str[100];
	sprintf(str, "%.10f", result);

	char c;
	int i, j, decFound;
	for(i = 0, j = 0; j != n; i++) {
		c = str[i];
		
		if (c == '.') {
			decFound = 1;
		}

		if (decFound == 1) {
			j++;
		}
	}

	printf("%c\n", str[i]);

	return 0;
}
