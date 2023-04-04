#include <stdio.h> //표준 입출력 라이브러리
//라이브러리 : 자주 사용하는 필요한 기능들을 모아놓은 파일

//링크 과정에서 미리 만들어놓은 기능을 라이브러리와 내 코드를 연결하여
//매번 만들어서 사용하는것이 아니라 가져와서 사용하겠다.

void main() {
	int number,number2; //정수형 변수 선언
	number = 1; //정수형 변수에 데이터 대입
	number2 = 2;

	int number3 = 3; //정수형 변수 초기화

	float f1 = 3.14; //실수형 변수 초기화
	double d1 = 1.23; //실수형 변수 초기화

	char ch; //문자형 변수 선언
	ch = 'g';

	//char name[] = "홍길동";//문자열 초기화 
	// \n은 줄바꿈 표시.
	 //예시 = printf("가나다라마바사.\n", 변수)
	//정수형 형식문자 %d 
	//문자형 형식문자 %c
	//실수형 형식문자 %f
	//문자열 형식문자 %s

	//이름,키,몸무게,혈액형을 저장하는 변수를 초기화 하세요.
	char name[] = "이현준";
	float height = 174.3;
	float weight = 65.1;
	char bt[] = "AB";
	int age = 33;

	printf("제 이름은 %s입니다.\n", name);
	printf("제 키는 %.1fcm입니다.\n", height);
	printf("제 몸무게는 %.1fkg입니다.\n", weight);
	printf("제 혈액형은 %s형 입니다.\n", bt);
	printf("제 나이는 %d살 입니다.\n", age);







}