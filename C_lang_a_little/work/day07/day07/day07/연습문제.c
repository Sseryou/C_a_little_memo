#include <stdio.h>

void main() {
	
	/*int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d\n", a); //---> ���⿡�� ���� �� : 20
	*p = 50;
	printf("%d\n", a); // ---> ���⿡�� ���� ��: 50

	//���� 10 �����ϴ� number ���� �� �ʱ�ȭ
	//number�� ����� �޸� �ּҸ� �����ϴ� �����ͺ��� number����
	//printf �Լ��� ȣ���� ���� 10�� ���� number�� �ּ� ���
	//�����ͺ��� pnumber�� ���


	int number = 10;
	int* pnumber = &number;

	printf("�����͸� �̿��� ���� 10 ��� : %d\n", *pnumber);
	printf("���� number�� �ּ� : %p\n", pnumber);*/

	/*int* ptr;
	int num1 = 5;
	int num2 = 8;

	//1)

	ptr = &num1;

	printf("%d\n", *ptr);

	//2)

	ptr = &num2;

	printf("%d\n", *ptr);

	//��°�� 5, 8*/




	/*
	* int�� ���� n1�� n2�� �����ϰ� 100�� 200���� �ʱ�ȭ �մϴ�. int�� ������ ����
	* ptr1�� ptr2�� �����Ͽ� ���� n1�� n2�� �ּҰ��� �����մϴ�. �׸��� �� ���¿���
	* �� ������ ������ ������ �ִ� ���� ��ȯ�ϵ��� ���α׷��� �ۼ��� ������.
	* 
	*/

	int n1 = 100, n2 = 200;
	int* ptr1 = &n1;
	int* ptr2 = &n2;

	printf("%d %d\n", *ptr1, *ptr2);

	int save1 = *ptr1;
	int save2 = *ptr2;
	*ptr1 = save2;
	*ptr2 = save1;


	printf("%d %d\n", *ptr1, *ptr2);
		







}