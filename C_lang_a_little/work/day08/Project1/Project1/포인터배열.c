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


	//char* name[5] = { "메모리", "cpu", "모니터", "메인보드", "하드디스크" };

	////제품번호를 입력받고 해당 번호가 입력되면 출력하고
	////다른 번호가 입력되면 "제품 코드 입력 오류" 라고 출력
	//
	//int serial;
	//printf("제품번호를 입력해 주세요(0~4) : ");
	//scanf_s(" %d", &serial);

	//if (serial <5 && serial > -1) {
	//	printf("%s\n", name[serial]);
	//}
	//else {
	//	printf("제품 코드 입력 오류");
	//}
	// 
	
	//길이가 5인 배열 arr을 선언하고 10,20,30,40,50으로 초기화
	//이 배열의 첫번째 요소를 가리키는 포인터변수 ptr선언.
	//포인터 변수 ptr에 저장된 값을 증가시키는 방식으로
	//배열의 요소에 접근해 배열의 모든 요소 출력.

	//int arr[5] = { 10, 20, 30, 40, 50 };
	//int* ptr = &arr[0];
	///*printf("첫 번째 값 : %d\n", *(ptr + 0));
	//printf("두 번째 값 : %d\n", *(ptr + 1));
	//printf("세 번째 값 : %d\n", *(ptr + 2));
	//printf("네 번째 값 : %d\n", *(ptr + 3));
	//printf("다섯 번째 값 : %d\n", *(ptr + 4));

	//printf("\n");

	//printf("첫 번째 값 : %d\n", *(ptr));
	//ptr++;
	//printf("두 번째 값 : %d\n", *(ptr));
	//ptr++;
	//printf("세 번째 값 : %d\n", *(ptr));
	//ptr++;
	//printf("네 번째 값 : %d\n", *(ptr));
	//ptr++;
	//printf("다섯 번째 값 : %d\n", *(ptr));*/

	//for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
	//	printf("%d 번째 값 : %d\n", i, ptr[i]);
	//}

	//길이 8, 배열 arr, 1,2,3,4,5,6,7로 초기화
	//마지막 요소를 가리키는 포인터 변수 ptr선언
	//ptr을 감소시키는 방식으로 홀수만 더하기

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