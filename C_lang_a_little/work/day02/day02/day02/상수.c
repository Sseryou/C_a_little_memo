#include <stdio.h>
#define CHARGE 2000

void main() {

	
	const float PI = 3.14; //�ɺ��� ���
	float pi = 3.14; //�Ǽ��� ����

	int radius; //������ ���� ����
	pi = 3.1; //���� ���� �� �� �ִ�.
	//PI = 3.1;//���� ���� �� �� ����.

	int time;

	printf("�������� �Է����ּ��� : ");
	scanf("%d", &radius);//radius������ Ű����� �Է¹��� ���� ����
	printf("%d*3.14=%f\n", radius, radius * PI);
	printf("\n");
	printf("������ �Է����ּ��� : ");
	scanf("%d", &time);
	printf("%d�ð��� ��� : %d\n", time, CHARGE * time);

}