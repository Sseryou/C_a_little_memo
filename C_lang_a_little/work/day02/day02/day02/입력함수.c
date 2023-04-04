#include <stdio.h>

void main() {
	//char 변수명[크기];


	//나이와 키, 이름, 혈액형을 키보드에서 입력받아 (입력=scanf이용)
	//다음과 같이 출력하도록 구현
	//나이 : xx세
	//키 : xx.xCM
	//이름 : xxx님
	//혈액형 : x형
	//나이 정수 키 실수 이름 문자열 혈액형 문자열
	//문자열은 입력받을때 &를 붙이지 않는다.
	int age;
	float height;
	char name[10];
	char bt[10];

	printf("나이를 입력해주세요 : ");
	scanf("%d",&age);
    printf("키를 입력해주세요 : ");
	scanf("%f", &height);
	printf("이름을 입력해주세요 : ");
	scanf("%s", name);
	printf("혈액형를 입력해주세요 : ");
	scanf("%s", bt);

	printf("\n");
	printf("나이 : %d세\n", age);
	printf("키 : %.1fCM\n", height);
	printf("이름 : %s님\n", name);
	printf("혈액형 : %s형\n", bt);




}