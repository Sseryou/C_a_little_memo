#include <stdio.h>

void main() {

	int num1 = 7, num2 = 3;

	printf("%d + %d = %d\n", num1, num2, num1+num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);

	//%를 자주 사용하는 곳
	//1. 짝수 홀수 구별할때
	//2. n의 배수 구할 때

	printf("\n");

	int num3 = 3, num4 = 4;
	num3 += 3; //num3 = num3 + 3; 연산후 좌변을 우변에 대입
	num4 *= 4; //num4 = num4 * 4;

	printf("num3+=3의 결과 : %d\n", num3);
	printf("num4*=4의 결과 : %d\n", num4);

	printf("\n");

	int a = 10, b = 11;
	printf("a == b: %d\n", a == b);
	printf("a > b: %d\n", a > b);
	printf("a < b: %d\n", a < b);
	printf("a >= b: %d\n", a >= b);
	printf("a <= b: %d\n", a <= b);
	printf("a != b: %d\n", a != b);

	//반환을 한다 -> 변수에 담아서 출력, 출력함수에 바로 출력해야함(반환 즉시 데이터화)
	//결과가 참 또는 거짓으로 반환되는 것들은 조건문과 관련이 깊다.
	//항상 왼쪽 기준.

	printf("\n");

	int c = 10, d = 10;
	printf("c : %d\n", c);
	printf("c : %d\n", ++c); //증가를 먼저 하고 출력합니다.
	printf("c : %d\n", c);

	printf("\n");

	printf("d : %d\n", d);
	printf("d : %d\n", d++); //출력을 하고 더해줍니다.
	printf("d : %d\n", d);

	printf("\n");
	
	int x = 2;
	printf("x : %d\n", ++x);
	printf("x : %d\n", x++);
	printf("x : %d\n", x++);
	printf("x : %d\n", ++x);
	printf("x : %d\n", ++x);
	printf("x : %d\n", ++x);
	printf("x : %d\n", x++);
	printf("x : %d\n", ++x);
	printf("x : %d\n", x++);
	printf("x : %d\n", x);

}