#include <stdio.h>

int num = 3; // 전역변수
void f1();
void main() {
	f1();//sum : 10 s_sum : 10
	f1();//sum : 10 s_sum : 20
	f1();//sum : 10 s_sum : 30

	
}

void f1() {
	int sum = 0; //지역변수 : 함수실행시 생성 ~ 함수종료시 소멸
	static int s_sum = 0; //정적변수 : 프로그램 실행시 생성 ~ 프로그램 종료시 소멸
	
	sum += 10;
	s_sum += 10;
	printf("sum : %d, s_sum : %d\n", sum, s_sum);


}