#include <stdio.h>

void main() {

	/*int a = 10, b = 20, c = 30;

	int* ar[3];
	ar[0] = &a;
	ar[1] = &b;
	ar[2] = &c;

	int length = sizeof(ar) / sizeof(ar[0]);

	for (int i = 0; i < length; i++) {

		printf("ar[%d] : %d\n", i, *ar[i]);

	}

	*ar[0] = 100;
	printf("a : %d\n", a);*/


	//char* name[5] = { "�޸�", "cpu", "�����", "���κ���", "�ϵ��ũ" };

	////��ǰ��ȣ�� �Է¹ް� �ش� ��ȣ�� �ԷµǸ� ����ϰ�
	////�ٸ� ��ȣ�� �ԷµǸ� "��ǰ �ڵ� �Է� ����" ��� ���
	//
	//int serial;
	//printf("��ǰ��ȣ�� �Է��� �ּ���(0~4) : ");
	//scanf_s(" %d", &serial);

	//if (serial <5 && serial > -1) {
	//	printf("%s\n", name[serial]);
	//}
	//else {
	//	printf("��ǰ �ڵ� �Է� ����");
	//}
	// 
	
	//���̰� 5�� �迭 arr�� �����ϰ� 10,20,30,40,50���� �ʱ�ȭ
	//�� �迭�� ù��° ��Ҹ� ����Ű�� �����ͺ��� ptr����.
	//������ ���� ptr�� ����� ���� ������Ű�� �������
	//�迭�� ��ҿ� ������ �迭�� ��� ��� ���.

	//int arr[5] = { 10, 20, 30, 40, 50 };
	//int* ptr = &arr[0];
	///*printf("ù ��° �� : %d\n", *(ptr + 0));
	//printf("�� ��° �� : %d\n", *(ptr + 1));
	//printf("�� ��° �� : %d\n", *(ptr + 2));
	//printf("�� ��° �� : %d\n", *(ptr + 3));
	//printf("�ټ� ��° �� : %d\n", *(ptr + 4));

	//printf("\n");

	//printf("ù ��° �� : %d\n", *(ptr));
	//ptr++;
	//printf("�� ��° �� : %d\n", *(ptr));
	//ptr++;
	//printf("�� ��° �� : %d\n", *(ptr));
	//ptr++;
	//printf("�� ��° �� : %d\n", *(ptr));
	//ptr++;
	//printf("�ټ� ��° �� : %d\n", *(ptr));*/

	//for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
	//	printf("%d ��° �� : %d\n", i, ptr[i]);
	//}

	//���� 8, �迭 arr, 1,2,3,4,5,6,7�� �ʱ�ȭ
	//������ ��Ҹ� ����Ű�� ������ ���� ptr����
	//ptr�� ���ҽ�Ű�� ������� Ȧ���� ���ϱ�

	int arr[8] = { 1,2,3,4,5,6,7 };
	int* parr;
	int* ptr = &arr[7];
	int sum = 0;

	printf("sizeof(arr) : %d\n", sizeof(arr));

	for (int i = 0; i < 8; i++) {
		if (*ptr % 2 != 0) {
			sum += *ptr;

		}
		ptr--;
	}
	printf("%d\n", sum);
	


}