#include <stdio.h>

void open() {
	//open()이라는 함수 구현하기
	printf("바닥 청소하기\n");
	printf("포스기 켜기\n");
	printf("재료 손질하기\n");
	printf("문열기\n");

}
//f(x) = 2x + 1
int f(int x) {
	int sum = 2 * x + 1;
	return sum;

}

void main() {
	open();
	//printf("%d\n", f(3));
	int num = f(3); //반환을 받으면 호출부가 데이터 자체로 변한다.
	printf("%d\n", num);

	
}