#include <stdio.h>

#define PI 3.14

int main(void) {
	int r, c1, c2;
	
	float area, circ, squareArea;
	float totalArea = 0, totalCirc = 0, totalSquareArea = 0;

	scanf("%d%d", &c1, &c2);

	for (r=c1; r<=c2; r++) {
		area = PI * (r * r);
		totalArea += area;

		circ = 2 * PI * r;
		totalCirc += circ;

		squareArea = 2 * (r * r);
		totalSquareArea += squareArea;
	}

	printf("%.3f\n%.3f\n%.3f\n", totalArea, totalCirc, totalSquareArea);

	return 0;
}
