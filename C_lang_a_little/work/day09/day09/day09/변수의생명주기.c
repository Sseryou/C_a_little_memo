#include <stdio.h>

int num = 3; // ��������
void f1();
void main() {
	f1();//sum : 10 s_sum : 10
	f1();//sum : 10 s_sum : 20
	f1();//sum : 10 s_sum : 30

	
}

void f1() {
	int sum = 0; //�������� : �Լ������ ���� ~ �Լ������ �Ҹ�
	static int s_sum = 0; //�������� : ���α׷� ����� ���� ~ ���α׷� ����� �Ҹ�
	
	sum += 10;
	s_sum += 10;
	printf("sum : %d, s_sum : %d\n", sum, s_sum);


}