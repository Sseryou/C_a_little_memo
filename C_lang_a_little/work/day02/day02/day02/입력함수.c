#include <stdio.h>

void main() {
	//char ������[ũ��];


	//���̿� Ű, �̸�, �������� Ű���忡�� �Է¹޾� (�Է�=scanf�̿�)
	//������ ���� ����ϵ��� ����
	//���� : xx��
	//Ű : xx.xCM
	//�̸� : xxx��
	//������ : x��
	//���� ���� Ű �Ǽ� �̸� ���ڿ� ������ ���ڿ�
	//���ڿ��� �Է¹����� &�� ������ �ʴ´�.
	int age;
	float height;
	char name[10];
	char bt[10];

	printf("���̸� �Է����ּ��� : ");
	scanf("%d",&age);
    printf("Ű�� �Է����ּ��� : ");
	scanf("%f", &height);
	printf("�̸��� �Է����ּ��� : ");
	scanf("%s", name);
	printf("�������� �Է����ּ��� : ");
	scanf("%s", bt);

	printf("\n");
	printf("���� : %d��\n", age);
	printf("Ű : %.1fCM\n", height);
	printf("�̸� : %s��\n", name);
	printf("������ : %s��\n", bt);




}