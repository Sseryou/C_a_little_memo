#include <stdio.h>

void main() {
	/*int i = 0;
	char ch = 'A';
	while (i < 101) {
		printf("%c\n", ch);
		i++;
	}*/

	/*int num = 0;
	
	while (num != -1) {
		printf("���ڸ� �Է��ϼ���(-1�� �Է��ϸ� ����) : ");
		scanf_s("%d", num);
		if (num == -1) {
			printf("�����մϴ�.\n");
		}
		else {
			printf("%d��(��) �Է��ϼ̽��ϴ�\n.", num);
		}
	}*/
	//while(1) { } = �׻� ��(1)�̹Ƿ� ���ѹݺ�


	/*int num = -1;

	do {
		printf("-1�Է½� ����");
		scanf_s("%d", &num);
	} while (num != -1);*/

	//1~5���� ����ϴ� �ڵ带 while������ �ۼ��ϱ�

	/*int num = 1;
	while (num <= 5) {
		printf("%d\n", num);
		num++;
	}*/

	//1~10���� ������ ���ϴ� �ڵ带 while������ �ۼ��ϱ�

	//int total = 0;
	//int num = 1;
	//while (num < 11) {
	//	total += num; //total = total + num;
	//	num++;
	//}
	//printf("1~10������ ���� : %d\n", total);

	//10~1���� �Ųٷ� ����ϴ� �ڵ带 while������ �ۼ��ϱ�
	/*int num = 10;
	while (num > 0) {
		printf("%d ", num);
		num--;
	}*/

	//1���� 10���� Ȧ���� ����ϴ� �ڵ带 while������ �ۼ��ϱ�

	/*int num1 = 1;
	while (num1 < 11) {
		if (num1 % 2 == 1) {
			printf("%d ", num1);
		}
		num1++;
	}*/
	

    //1���� 100���� 7�� ����� �ͷ��ϴ� �ڵ� �ۼ��ϱ�

	/*int num3 = 1;
	while (num3 < 100) {
		if (num3 % 7 == 0) {
			printf("%d", num3);
		}
		num3++
	}*/


	//������ 5�� ����ϱ�

	//int dan = 5; //��
	//
	//int num4 = 1; //���۰�
	//
	//while (num4 < 10) {
	//	printf("%d * %d = %d\n", dan, num4, dan * num4);
	//	num4++;
	//}

	//A B C D ����ϱ�
	
	int ch = 65;
	while (ch < 69) {
		printf("%c ",(char)ch);
		ch++;
	}
}