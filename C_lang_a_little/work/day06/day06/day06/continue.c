#include <stdio.h>

void main() {

	int num;
	for (num = 1; num <= 5; num++) {

		if (num == 3) {
			continue;
		}

		printf("%d\n", num);
	}

}