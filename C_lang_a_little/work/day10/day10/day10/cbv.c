#include <stdio.h>

void swapNumber(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
	printf("�Լ� �ȿ��� Ȯ���� ��� num1 : %d num2 : %d\n", num1, num2);

}




void main() {

	int number1 = 33, number2 = 99;
	swapNumber(number1, number2);
	printf("�Լ� ȣ�� �Ϸ� �� Ȯ���� ��� num1 : %d, num2 : %d\n", number1, number2);
	
	

}