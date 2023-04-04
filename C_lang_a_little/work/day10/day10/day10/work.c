#include <stdio.h>

//원산지(origin), 가격(price), 바리스타이름(barista)를
//멤버로 갖는 coffee구조체 정의
//문자열 길이 마음대로

struct coffee {
	char origin[30];
	char price[10];
	char barista[30];

};

//직원 관리 구조체 정의. 문자열 이름 문자열 전화번호
//정수 형태의 월급을 저장할수있는 worker이름의 구조체 정의
//구조체 변수 하나 선언한다음 사용자가 직접 입력하는 정보로 변수를 채워 출력하기
//직원의 이름 : 제임스
//직원의 전화번호 : 010-1234-5678
//직원의 월급 : 1000000

//위에서 정의한 구조체 worker에 WORKER라는 이름을 새롭게 부여하고
//해당 구조체 기반 길이가 3인 배열 선언
//세 명의 정보를 사용자로부터 입력받아 배열에 저장한
//다음 배열에 저장된 데이터를 순서대로 출력.

typedef struct worker {
	char name[30];
	char phone[20];
	int monthlypay;
}WORKER;





void main() {

	struct worker worker1;
	printf("직원의 이름 : ");
	scanf("%s", &worker1.name);
	printf("직원의 전화번호 : ");
	scanf("%s", &worker1.phone);
	printf("직원의 월급 : ");
	scanf("%d", &worker1.monthlypay);



	WORKER imployer[3];
	for (int i = 0; i < 3; i++) {

		printf("직원의 이름 : ");
		scanf("%s", &imployer[i].name);
		printf("직원의 전화번호 : ");
		scanf("%s", &imployer[i].phone);
		printf("직원의 월급 : ");
		scanf("%d", &imployer[i].monthlypay);
		
	}

	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("직원의 이름 : %s\n직원의 전화번호 : %s\n직원의 월급 : %s\n", imployer[i].name, imployer[i].phone, imployer[i].monthlypay);
	}

}