#include <stdio.h>

void main() {

	/*int student1_score = 100;
	int student2_score = 60;
	int student3_score = 80;*/

	/*printf(" 학생 1번의 점수 : %d\n", student_score[0]);
	printf(" 학생 1번의 점수 : %d\n", student_score[1]);
	printf(" 학생 1번의 점수 : %d\n", student_score[2]);*/

	//int student_score[3] = { 100, 60, 80 }; 배열의 초기화
	//int student_score[3]; //배열의 선언
	//student_score[0] = 100;
	//student_score[1] = 60;
	//student_score[2] = 80;

	//for (int i = 0; i < 3; i++) {
	//	printf("학생 %d번의 점수 : %d\n", i + 1, student_score[i]);
	//}

	////배열 안의 모든 요소의 총합
	//int iArr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	//int total = 0;
	//for (int i = 0; i < 10; i++) {
	//	total += iArr[i];
	//	
	//}
	//printf("%d ", total);

	/*char greet[] = "Hello, Guys!";
	printf("1차원 배열 greet의 길이는 : %d\n", sizeof(greet));*/
	
	/*int iArr[] = { 10, 20, 30, 40, 50};
	printf("정수형 1차원 배열 iArr[]의 길이는 : %d\n", sizeof(iArr)/sizeof(int));
	for (int i = 0; i < sizeof(iArr)/sizeof(int); i++) {
		printf("%d\n", iArr[i]);
	}*/

	//char goodbye[50] = "GOOD BYE!";

	//printf("%s\n", goodbye);
	////print 함수는 널문자 직전까지만 출력하면 된다는 것을 알고 있습니다.


	//char mind[30] = "I Love Programing";

	//printf("%s\n", mind);

	//mind[7] = '\0';

	//printf("%s\n", mind);

	//mind[1] = '\0';

	//printf("%s\n", mind);

	//널 문자는 문자열의 끝을 의미하는 문자이기 때문에
	//중간에 널 문자를 넣으면 문자열의 끝을 변경할 수 있습니다.



	//char str[50];

	//printf("문자열을 입력하세요 : ");
	//scanf_s("%s", str); //&연산자를 입력하지 않습니다.
	//printf("입력된 문자열 : %s\n", str);


	//5명의 학생 점수 입력받아 scores라는 배열에 저장
	//배열에 저장된 모든 값을 다음과 같은 형식으로 출력

	//<출력결과>
	//1번 학생 점수 : 50 점
	//2번 학생 점수 : 60 점
	//3번 학생 점수 : 80 점
	//4번 학생 점수 : 100 점
	//5번 학생 점수 : 40 점

	
	int scores[5];

	for (int i = 0; i < 5; i++) {
		printf("%d번 학생 점수 :", i+1);
		scanf_s("%d", &scores[i]);

	}
	




}