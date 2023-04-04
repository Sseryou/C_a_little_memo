#include <stdio.h>

void main() {

	/*int num;

	printf("정수입력 : ");
	scanf("%d", &num);

	int absolute = num > 0 ? num : num * -1;
	printf("절대값 : %d\n", absolute);*/

	//printf("--------------------------------------------\n");
	//사용자에게 2개의 숫자를 입력받아 변수에 저장, 두 변수 중 큰 값 출력
	/*int num1;
	int num2;
	printf("첫번째 값을 입력해주세요 : \n");
	scanf("%d", &num1);
	printf("2번째 값을 입력해주세요 : \n");
	scanf("%d", &num2);

	int result = num1>num2 ? num1 : num2;

	printf("더 큰 값 : %d\n", result);
	*/

	
	//사용자에게 동의하면 y를 입력하고 동의하지 않으면 N을
	//입력받아, 사용자에게 동의 여부를 입력받는 프로그램을 만들어보세요.
	//Y, N 이외의 것을 입력했을때 잘못입력하셨습니다. 라고 출력하기

	//N출 Y출 아무거나출
	/*char agree;
	printf("동의하시겠습니까? Y, N : ");
	scanf("%c", &agree);

	printf("%s", agree == 'Y' ? "사용자는 동의하였습니다." : agree == 'N' ? "사용자는 동의하지 않으셨습니다." : "잘못입력하셨습니다.");*/
	//삼항연산자를 2개 겹쳐서 더 길게 만듬

	//과수원 문제
	//배 사과 오렌지가 하루에 5,7,5개씩 생산됨
	//하루에 생산되는 총 과일양
	//시간당 생간되는 총 과일양

	//총합 :
	//시간당 생산량 :
	
	int pear = 5;
	int apple = 7;
	int orange = 5;
	int daytoproduce =  ("%d", pear + apple + orange);
	float timetoproduce = ((float)daytoproduce / 24); 
	//정수 / 정수 -> 정수
	//실수 / 정수 , 정수/ 실수 , 실수/ 실수 -> 실수

	printf("총합 :  %d\n", daytoproduce);
	printf("시간당 생산량 : %.4f\n", timetoproduce);



}