#include <stdio.h>

void main() {

	/*int student1_score = 100;
	int student2_score = 60;
	int student3_score = 80;*/

	/*printf(" �л� 1���� ���� : %d\n", student_score[0]);
	printf(" �л� 1���� ���� : %d\n", student_score[1]);
	printf(" �л� 1���� ���� : %d\n", student_score[2]);*/

	//int student_score[3] = { 100, 60, 80 }; �迭�� �ʱ�ȭ
	//int student_score[3]; //�迭�� ����
	//student_score[0] = 100;
	//student_score[1] = 60;
	//student_score[2] = 80;

	//for (int i = 0; i < 3; i++) {
	//	printf("�л� %d���� ���� : %d\n", i + 1, student_score[i]);
	//}

	////�迭 ���� ��� ����� ����
	//int iArr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	//int total = 0;
	//for (int i = 0; i < 10; i++) {
	//	total += iArr[i];
	//	
	//}
	//printf("%d ", total);

	/*char greet[] = "Hello, Guys!";
	printf("1���� �迭 greet�� ���̴� : %d\n", sizeof(greet));*/
	
	/*int iArr[] = { 10, 20, 30, 40, 50};
	printf("������ 1���� �迭 iArr[]�� ���̴� : %d\n", sizeof(iArr)/sizeof(int));
	for (int i = 0; i < sizeof(iArr)/sizeof(int); i++) {
		printf("%d\n", iArr[i]);
	}*/

	//char goodbye[50] = "GOOD BYE!";

	//printf("%s\n", goodbye);
	////print �Լ��� �ι��� ���������� ����ϸ� �ȴٴ� ���� �˰� �ֽ��ϴ�.


	//char mind[30] = "I Love Programing";

	//printf("%s\n", mind);

	//mind[7] = '\0';

	//printf("%s\n", mind);

	//mind[1] = '\0';

	//printf("%s\n", mind);

	//�� ���ڴ� ���ڿ��� ���� �ǹ��ϴ� �����̱� ������
	//�߰��� �� ���ڸ� ������ ���ڿ��� ���� ������ �� �ֽ��ϴ�.



	//char str[50];

	//printf("���ڿ��� �Է��ϼ��� : ");
	//scanf_s("%s", str); //&�����ڸ� �Է����� �ʽ��ϴ�.
	//printf("�Էµ� ���ڿ� : %s\n", str);


	//5���� �л� ���� �Է¹޾� scores��� �迭�� ����
	//�迭�� ����� ��� ���� ������ ���� �������� ���

	//<��°��>
	//1�� �л� ���� : 50 ��
	//2�� �л� ���� : 60 ��
	//3�� �л� ���� : 80 ��
	//4�� �л� ���� : 100 ��
	//5�� �л� ���� : 40 ��

	
	int scores[5];

	for (int i = 0; i < 5; i++) {
		printf("%d�� �л� ���� :", i+1);
		scanf_s("%d", &scores[i]);

	}
	




}