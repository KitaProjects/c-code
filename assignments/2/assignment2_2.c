#include <stdio.h>
#include <string.h>

#define MAX_LINE 101
#define MAX_WORD 31

/* ---------------- *
 * HELPER FUNCTIONS *
 * ---------------- */

int is_alpha(char c) {
	if (c >= 'a' && c <= 'z') return c;
	if (c >= 'A' && c <= 'Z') return (c + 32);

	return 1;
}

void clean_word(char *str) {
	int i, j = 0;
	for (i = 0; str[i] != '\0'; i++) {
		int cleaned = is_alpha(str[i]);
		if (cleaned != 1) {
			str[j++] = cleaned;
		}
	}

	str[j] = '\0';
}

/* ---- *
 * MAIN *
 * ---- */

int main() {
	char line[MAX_LINE];

	/* scanf, skip whitespaces, 101 chars at most, and anthing NOT a newline */
	while (scanf(" %101[^\n]", &line) == 1) {
		char *str = strtok(line, " ");

		while (str != NULL) {
			clean_word(str);
			printf("%s\n", str);
			str = strtok(NULL, " ");
		}
	}

	return 0;
}