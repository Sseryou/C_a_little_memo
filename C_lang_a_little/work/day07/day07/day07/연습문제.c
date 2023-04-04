#include <stdio.h>

void main() {
	
	/*int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d\n", a); //---> 여기에서 나올 값 : 20
	*p = 50;
	printf("%d\n", a); // ---> 여기에서 나올 값: 50

	//정수 10 저장하는 number 선언 및 초기화
	//number가 저장된 메모리 주소를 저장하는 포인터변수 number선언
	//printf 함수를 호출해 정수 10과 변수 number의 주소 출력
	//포인터변수 pnumber만 사용


	int number = 10;
	int* pnumber = &number;

	printf("포인터를 이용해 정수 10 출력 : %d\n", *pnumber);
	printf("변수 number의 주소 : %p\n", pnumber);*/

	/*int* ptr;
	int num1 = 5;
	int num2 = 8;

	//1)

	ptr = &num1;

	printf("%d\n", *ptr);

	//2)

	ptr = &num2;

	printf("%d\n", *ptr);

	//출력결과 5, 8*/




	/*
	* int형 변수 n1과 n2를 선언하고 100과 200으로 초기화 합니다. int형 포인터 변수
	* ptr1과 ptr2를 선언하여 각각 n1과 n2의 주소값을 저장합니다. 그리고 이 상태에서
	* 각 포인터 변수가 가지고 있는 값을 교환하도록 프로그램을 작성해 보세요.
	* 
	*/

	int n1 = 100, n2 = 200;
	int* ptr1 = &n1;
	int* ptr2 = &n2;

	printf("%d %d\n", *ptr1, *ptr2);

	int save1 = *ptr1;
	int save2 = *ptr2;
	*ptr1 = save2;
	*ptr2 = save1;


	printf("%d %d\n", *ptr1, *ptr2);
		







}