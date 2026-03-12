#include <stdio.h>
#include <string.h>

#define MAX_LINE 101
#define MAX_WORD 31

typedef struct {
	char word[MAX_WORD];
	int count;
} Entry;

/* ---------------- *
 * HELPER FUNCTIONS *
 * ---------------- */

int is_alpha(char c) {
	if (c >= 'a' && c <= 'z') return c;
	if (c >= 'A' && c <= 'Z') return (c + 32);

	return -1;
}

void clean_word(char *str) {
	int i, j = 0;
	for (i = 0; str[i] != '\0'; i++) {
		int cleaned = is_alpha(str[i]);
		if (cleaned != -1) {
			str[j++] = cleaned;
		}
	}

	str[j] = '\0';
}

/* returns index of requested word */
int find_word(Entry *arr, int size, char *word) {
	for (int i = 0; i < size; i++) {
		if (strcmp(arr[i].word, word) == 0) {
			return i;
		}
	}

	return -1;
}

/* ---- *
 * MAIN *
 * ---- */

int main() {
	char line[MAX_LINE];
	Entry freq_count[MAX_LINE];

	int word_i = 0;
	/* scanf, skip whitespaces, 100 chars at most, and anthing NOT a newline */
	while (scanf(" %100[^\n]", &line) == 1) {
		char *str = strtok(line, " ");

		while (str != NULL) {
			clean_word(str);

			int ith_word = find_word(freq_count, word_i, str);

			if (ith_word != -1) {
				freq_count[ith_word].count++;
			} else {
				strcpy(freq_count[word_i].word, str);
				freq_count[word_i].count = 1;
				word_i++;
			}

			str = strtok(NULL, " ");
		}
	}

	for (int i = 0; i < word_i; i++) {
		printf("%s => %d\n",
			freq_count[i].word,
			freq_count[i].count
		);
	}

	return 0;
}