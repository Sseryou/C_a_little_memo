#include <stdio.h>

//�Ű������� ������ ������ �޴´�.
void swapNumber(int* ptr1, int* ptr2) {

	//���� �ּҿ� �����Ͽ� ����� ���� ���� ��ȯ�մϴ�.
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	printf("�Լ� �ȿ��� Ȯ���� ��� num1 : %d, num2 : %d\n", *ptr1, *ptr2);

}


void main() {
	int number1 = 33, number2 = 99;
	swapNumber(&number1, &number2);
	printf("�Լ� ȣ�� �Ϸῡ�� Ȯ���� ��� num1 : %d, num2 : %d\n", number1, number2);
}
