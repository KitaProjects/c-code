#include <stdio.h>

/* ---------------- *
 * HELPER FUNCTIONS *
 * ---------------- */

int hexToInt(int c) {
	if (c >= '0' && c <= '9') return c - '0';
	if (c >= 'A' && c <= 'F') return c - 'A' + 10;

	return 0;
}

/* prints copies of characters in the given hex format (2 uppercase, 0 padded) */
void printCompress(char c, int count) {
	for (int i = 0; i < count && i < 3; i++) {
		printf("%c", c);
	}

	if (count >= 3) {
		printf("%02X", count);
	}
}

/* returns what the size of compressed copies of chars would be (3 chars + 2 hex) */
int reportCompress(char c, int count) {
	if (count >= 3) {
		return 5;
	}

	return count; 
}

/* -------------------- *
 * ASSIGNMENT FUNCTIONS *
 * -------------------- */

/* compresses character by character */
void compress() {
	char current_char, next;
	int count;

	count = 1;
	while (scanf("%c", &next) != EOF) {
		if (current_char == next) {
			count++;
		} else {
			printCompress(current_char, count);

			current_char = next;
			count = 1;
		}
	}
	printCompress(current_char, count);
}

/* reads 3 characters (and 2 hex if necessary) at a time */
void expand() {
	char c1, c2, c3, h1, h2;
	int count;

	while (scanf("%c", &c1) != EOF) {
		if (scanf("%c", &c2) == EOF) {
			printf("%c", c1);
			break;
		}
		if (scanf("%c", &c3) == EOF) {
			printf("%c", c1);
			printf("%c", c2);
			break;
		}

		if (c1 == c2 && c1 == c3) {
			scanf("%c", &h1);
			scanf("%c", &h2);
			count = hexToInt(h1) * 16 + hexToInt(h2);

			for (int i = 0; i < count; i++) {
				printf("%c", c1);
			}
		} else {
			printf("%c", c1);
			ungetc(c3, stdin);
			ungetc(c2, stdin);
		}
	}
}


void report() {
	char current_char, next;
	int count, original, compressed, efficiency;

	original = 1;
	compressed = 0;

	count = 1;
	while (scanf("%c", &next) != EOF) {
		original++;
		if (current_char == next) {
			count++;
		} else {
			compressed += reportCompress(current_char, count);

			current_char = next;
			count = 1;
		}
	}
	
	compressed += reportCompress(current_char, count);

	efficiency = ((original - compressed) * 100) / original;

	printf("%d%%", efficiency);
}

/* ---- *
 * MAIN *
 * ---- */

int main(void) {
	char command_char;
	
	scanf("%c", &command_char);

	switch (command_char) {
		case 'C':
			scanf("%c", &command_char);
			compress();
			break;
		case 'E':
			scanf("%c", &command_char);
			expand();
			break;
		case 'R':
			scanf("%c", &command_char);
			report();
			break;
		default:
			printf("[ERROR] Unknown command, expected 'C', 'E' or 'R' but got: '%c'\n", command_char);
	}

	return 0;
}