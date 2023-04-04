#include <stdio.h>

void main() {

	int num = 1;

	while(1){
		printf("%d\n", num);

		num++;

		if (num > 3) {

			break;
		}
	}

}