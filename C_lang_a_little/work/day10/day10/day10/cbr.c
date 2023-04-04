#include <stdio.h>

//매개변수로 포인터 변수를 받는다.
void swapNumber(int* ptr1, int* ptr2) {

	//실제 주소에 접근하여 저장된 값을 서로 교환합니다.
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	printf("함수 안에서 확인한 결과 num1 : %d, num2 : %d\n", *ptr1, *ptr2);

}


void main() {
	int number1 = 33, number2 = 99;
	swapNumber(&number1, &number2);
	printf("함수 호출 완료에서 확인한 결과 num1 : %d, num2 : %d\n", number1, number2);
}
