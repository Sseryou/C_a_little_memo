#include <stdio.h>

//������(origin), ����(price), �ٸ���Ÿ�̸�(barista)��
//����� ���� coffee����ü ����
//���ڿ� ���� �������

struct coffee {
	char origin[30];
	char price[10];
	char barista[30];

};

//���� ���� ����ü ����. ���ڿ� �̸� ���ڿ� ��ȭ��ȣ
//���� ������ ������ �����Ҽ��ִ� worker�̸��� ����ü ����
//����ü ���� �ϳ� �����Ѵ��� ����ڰ� ���� �Է��ϴ� ������ ������ ä�� ����ϱ�
//������ �̸� : ���ӽ�
//������ ��ȭ��ȣ : 010-1234-5678
//������ ���� : 1000000

//������ ������ ����ü worker�� WORKER��� �̸��� ���Ӱ� �ο��ϰ�
//�ش� ����ü ��� ���̰� 3�� �迭 ����
//�� ���� ������ ����ڷκ��� �Է¹޾� �迭�� ������
//���� �迭�� ����� �����͸� ������� ���.

typedef struct worker {
	char name[30];
	char phone[20];
	int monthlypay;
}WORKER;





void main() {

	struct worker worker1;
	printf("������ �̸� : ");
	scanf("%s", &worker1.name);
	printf("������ ��ȭ��ȣ : ");
	scanf("%s", &worker1.phone);
	printf("������ ���� : ");
	scanf("%d", &worker1.monthlypay);



	WORKER imployer[3];
	for (int i = 0; i < 3; i++) {

		printf("������ �̸� : ");
		scanf("%s", &imployer[i].name);
		printf("������ ��ȭ��ȣ : ");
		scanf("%s", &imployer[i].phone);
		printf("������ ���� : ");
		scanf("%d", &imployer[i].monthlypay);
		
	}

	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("������ �̸� : %s\n������ ��ȭ��ȣ : %s\n������ ���� : %s\n", imployer[i].name, imployer[i].phone, imployer[i].monthlypay);
	}

}