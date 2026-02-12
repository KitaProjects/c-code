#include <stdio.h>

int main(void) {
	char c;
	int chars = 0, digits = 0, spaces = 0, other = 0;

	while (scanf("%c", &c) != EOF) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			chars++;
		} else if (c >= '0' && c <= '9') {
			digits++;
		} else if (c == ' ') {
			spaces++;
		} else {
			other++;
		}
	}

	printf("%d %d %d %d\n", chars, digits, spaces, other);

	return 0;
}
