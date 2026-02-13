#include <stdio.h>

int main(void) {
	/* assuming that '\0' is included in this count */
	char inp_a[101], inp_b[101], result[102];

	scanf("%s\n%s", inp_a, inp_b);

	/* size of inputs in digits */
	int i_a = 0, i_b = 0, i_r = 0, carry = 0;
	while (inp_a[i_a] != '\0') i_a++;
	while (inp_b[i_b] != '\0') i_b++;

	/* TODO: looks ugly find cleaner way of doing this */
	i_a--;
	i_b--;

	int sum;
	while(i_a >= 0 || i_b >= 0 || carry > 0) {
		int digit_a = 0, digit_b = 0;

		/* NOTE: ternary operators would be better here */
		if (i_a >= 0) {
			digit_a = inp_a[i_a] - '0';
		}
		if (i_b >= 0) {
			digit_b = inp_b[i_b] - '0';
		}

		sum = digit_a + digit_b + carry;

		result[i_r] = (sum % 10) + '0';
		carry = sum / 10;

		i_a--;
		i_b--;
		i_r++;
	}

	/* reverse print backwards stored result[] */
	for (i_r-- ; i_r >= 0; i_r--) {
		printf("%c", result[i_r]);
	}
	printf("\n");

	return 0;
}
