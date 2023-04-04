#include <stdio.h>

void main() {

	/*int arr[5] = { 1,2,3,4,5 };
	int *parr = arr;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", parr[i]);
	}
	printf("\n");*/

	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int(*pArr)[4] = arr; //arr == &arr[0][0] 

	printf("pArr[0][0] : %d\n", pArr[0][0]); //주소를 통해서 값에 접근
	printf("arr[0][0] : %d\n", arr[0][0]); //값에 직접 접근


	



}