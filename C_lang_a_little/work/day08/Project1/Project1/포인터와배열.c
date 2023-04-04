#include <stdio.h>

void main() {

	int a[5] = { 10, 20, 30, 40, 50 };

	int* pa; //정수형 변수를 저장할 정수형 포인터
	
	pa = a; //pa = &a[0]   a == &a[0]

	printf("*pa : %d\n", *pa);
	pa++;

	printf("*pa : %d\n", *pa);

	printf("\n");

	//배열의 이름으로 포인터 연산하기
	//배열명으로 가능한 포인터 연산
	//덧셈, 뺄셈, 참조연산자( * )

	int b[3] = { 10, 20, 30 };

	printf("a[0] : %d\n", b[0]);

	printf("*a : %d\n", *b);

	printf("b[1] : %d\n", b[1]);

	printf("*(b+1) : %d\n", *(b + 1));

	printf("b[1] : %d\n", b[2]);

	printf("*(b+1) : %d\n", *(b + 2));

	//b+1 : 현재위치 + 1
	//*(b+1) : 현재위치 + 1 한 위치의 주소에 접근해 값을 가져온다
	//배열의 첨자 : [ ]
	printf("\n");


	int ar[4] = { 10, 20, 30, 40 };
	int* par;
	par = ar;

	printf("*(par + 0) : %d\n", *(par + 0));
	printf("par[0] : %d\n", par[0]);
	printf("par[0] : %d\n", *(par + 0));
	printf("par[1] : %d\n", par[1]);
	printf("par[1] : %d\n", *(par + 1));
	printf("par[2] : %d\n", par[2]);
	printf("par[2] : %d\n", *(par + 2));
	printf("par[3] : %d\n", par[3]);
	printf("par[3] : %d\n", *(par + 3));



}