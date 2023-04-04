#include <stdio.h>

int add(int x, int y) {
	int num = x + y;
	return num;
}

int onetoten() {
	int i = 1;
	while (i <= 10) {
		printf(" %d", i);
			i++;
	}
}

//int sum() {
//	int total = 0;
//	for (int i = 0; i < 10; i++) {
//		total += i;
//
//	}
// return total;
//}

/*int oneToN(int n) {
	int total = 0;
	for (int i = 0; i <= n; i++) {
		total += i;

	}
	return total;
}*/


//int sumxToy(int x, int y){
//	int sum = 0;
//	if (x > y) {
//		for (int i = y; i <= x; i++) {
//			sum += i;
//		}
//
//	}
//	else {
//		for (int i = x; i <= y; i++) {
//			sum += i;
//		}
//	}
//	return sum;
//}


void main() {
	//printf("%d\n", add());
	//두 수 더하는 함수 만들기 2와 3을 합한 값을 호출

	//1부터 10까지 출력하는 함수 만들고 호출하기
	//onetoten();

	//1부터 10까지 합 구하는 함수 만들기
	//printf("%d", sum());

	//1부터 n까지의 합을 구하는 함수
	//printf("%d", oneToN(100));

	//x ~ y 까지의 합을 구하는데 x가 y보다 큰 경우
	//값을 바꿔서 계산하는 함수
	//printf("%d",sumxToy(20, 10));



}