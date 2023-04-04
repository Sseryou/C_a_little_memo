#include <stdio.h>

int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int max(int x, int y);
int min(int x, int y);


void main() {
	int x;
	int y;

	printf("숫자1을 입력하세요 : ");
	scanf_s("%d", &x);
	printf("숫자2을 입력하세요 : ");
	scanf_s("%d", &y);

	printf("sum(x,y) = %d\n", sum(x, y));
	printf("sub(x,y) = %d\n", sub(x, y));
	printf("mul(x,y) = %d\n", mul(x, y));
	printf("div(x,y) = %d\n", div(x, y));
	printf("max(x,y) = %d\n", max(x, y));
	printf("mix(x,y) = %d\n", min(x, y));

}

int sum(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}

int mul(int x, int y) {
	return x * y;
}

int div(int x, int y) {
	return x / y;
}

int max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

int min(int x, int y) {
	if (x > y) {
		return y;
	}
	else {
		return x;
	}
}