#include <stdio.h>

void open() {
	//open()�̶�� �Լ� �����ϱ�
	printf("�ٴ� û���ϱ�\n");
	printf("������ �ѱ�\n");
	printf("��� �����ϱ�\n");
	printf("������\n");

}
//f(x) = 2x + 1
int f(int x) {
	int sum = 2 * x + 1;
	return sum;

}

void main() {
	open();
	//printf("%d\n", f(3));
	int num = f(3); //��ȯ�� ������ ȣ��ΰ� ������ ��ü�� ���Ѵ�.
	printf("%d\n", num);

	
}