#include <stdio.h>

void compress() {
	int current_char, next, count;

	current_char = next = getchar();
	if (current_char == EOF) return;

	count = 1;
	while (next != EOF) {
		next = getchar();

		if (current_char == next) {
			count++;
		} else {
			for (int i = 0; i < count && i < 3; i++) {
				putchar(current_char);
			}

			if (count >= 3) {
				printf("%02X", count);
			}

			current_char = next;
			count = 1;
		}
	}
}

int main(void) {
	int command_char = getchar();

	getchar();

	switch (command_char) {
		case 'C':
			compress();
			break;
		case 'E':
		case 'R':
		default:
			printf("[ERROR] Unknown command, expected 'C', 'E' or 'R' but got: '%c'\n", command_char);
	}

	return 0;
}

/*
 * Helper functions
 */

int hexToInt(int c) {
	if (c >= '0' && c <= '9') return c - '0';
	if (c >= 'A' && c <= 'F') return c - 'A' + 10;
	
	return 1;
}