#include <stdio.h>

void main() {

	/*int arr[2][3] = {{1,2,3}, { 4,5,6 }};

	printf("arr[0][0] : %d\n", arr[0][0]);
	printf("arr[0][1] : %d\n", arr[0][1]);
	printf("arr[0][2] : %d\n", arr[0][2]);
	printf("\n");

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("arr[%d][%d] : %d\n ", i, j, arr[i][j]);
		}
	}*/

	//int numArr[3][4] = { {11,22,33,44},{55,66,77,88},{99,110,121,132} };

	//printf("%d\n", sizeof(numArr)); //4����Ʈ ũ���� ��Ұ� 12��(4*3��)�̹Ƿ� 48 ���
	//int row = sizeof(numArr[0]) / sizeof(int); //3 : ��ü���� / �� ���� ũ��
	//int col = sizeof(numArr) / sizeof(numArr[0]); //4 : ���� ������ ũ�⸦ ����� ũ��� ������


	//printf("%d\n", col);
	//printf("%d\n", row);
	//printf("\n");

	//for (int i = 0; i < col; i++) {
	//	for (int j = 0; j < row; j++) {
	//		printf("%d", numArr[i][j]);
	//	}
	//	printf("\n");
	//}

	int arr[3][4] = { {1},{2,3},{4,5,6,7} };
	//�� 2���� �迭�� ��� ����� �� ���� ���Ͻÿ�
	//����ִ� ��Ҵ� 0���� ����.

	int total = 0;
	int col = sizeof(arr[0]) / sizeof(int);
	int row = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			total += arr[i][j];
		}
	}
	printf("total : %d\n", total);


	/*int total = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			total += arr[i][j];

		}
	}
	printf("total : %d\n", total);*/
}