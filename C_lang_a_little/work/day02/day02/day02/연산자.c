#include <stdio.h>

void main() {

	int num1 = 7, num2 = 3;

	printf("%d + %d = %d\n", num1, num2, num1+num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);

	//%�� ���� ����ϴ� ��
	//1. ¦�� Ȧ�� �����Ҷ�
	//2. n�� ��� ���� ��

	printf("\n");

	int num3 = 3, num4 = 4;
	num3 += 3; //num3 = num3 + 3; ������ �º��� �캯�� ����
	num4 *= 4; //num4 = num4 * 4;

	printf("num3+=3�� ��� : %d\n", num3);
	printf("num4*=4�� ��� : %d\n", num4);

	printf("\n");

	int a = 10, b = 11;
	printf("a == b: %d\n", a == b);
	printf("a > b: %d\n", a > b);
	printf("a < b: %d\n", a < b);
	printf("a >= b: %d\n", a >= b);
	printf("a <= b: %d\n", a <= b);
	printf("a != b: %d\n", a != b);

	//��ȯ�� �Ѵ� -> ������ ��Ƽ� ���, ����Լ��� �ٷ� ����ؾ���(��ȯ ��� ������ȭ)
	//����� �� �Ǵ� �������� ��ȯ�Ǵ� �͵��� ���ǹ��� ������ ���.
	//�׻� ���� ����.

	printf("\n");

	int c = 10, d = 10;
	printf("c : %d\n", c);
	printf("c : %d\n", ++c); //������ ���� �ϰ� ����մϴ�.
	printf("c : %d\n", c);

	printf("\n");

	printf("d : %d\n", d);
	printf("d : %d\n", d++); //����� �ϰ� �����ݴϴ�.
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