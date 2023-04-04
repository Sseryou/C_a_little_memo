#include <stdio.h>
#define CHARGE 2000

void main() {

	
	const float PI = 3.14; //심볼릭 상수
	float pi = 3.14; //실수형 변수

	int radius; //정수형 변수 선언
	pi = 3.1; //값을 변경 할 수 있다.
	//PI = 3.1;//값을 변경 할 수 없다.

	int time;

	printf("반지름을 입력해주세요 : ");
	scanf("%d", &radius);//radius변수에 키보드로 입력받은 수를 저장
	printf("%d*3.14=%f\n", radius, radius * PI);
	printf("\n");
	printf("정수를 입력해주세요 : ");
	scanf("%d", &time);
	printf("%d시간당 요금 : %d\n", time, CHARGE * time);

}