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
	//�� �� ���ϴ� �Լ� ����� 2�� 3�� ���� ���� ȣ��

	//1���� 10���� ����ϴ� �Լ� ����� ȣ���ϱ�
	//onetoten();

	//1���� 10���� �� ���ϴ� �Լ� �����
	//printf("%d", sum());

	//1���� n������ ���� ���ϴ� �Լ�
	//printf("%d", oneToN(100));

	//x ~ y ������ ���� ���ϴµ� x�� y���� ū ���
	//���� �ٲ㼭 ����ϴ� �Լ�
	//printf("%d",sumxToy(20, 10));



}