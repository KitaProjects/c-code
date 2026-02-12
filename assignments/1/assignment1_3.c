#include <stdio.h>

int main(void) {
	char input[200], c;

	int i=0;
	while (scanf("%c", &c) != EOF) {
		input[i] = c;
		i++;
	}

	for (i-=1 ; i>=0; i--) {
		printf("%c", input[i]);
	}

	printf("\n");

	return 0;
}
