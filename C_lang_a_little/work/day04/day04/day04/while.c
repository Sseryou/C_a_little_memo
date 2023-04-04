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
		printf("숫자를 입력하세요(-1을 입력하면 종료) : ");
		scanf_s("%d", num);
		if (num == -1) {
			printf("종료합니다.\n");
		}
		else {
			printf("%d을(를) 입력하셨습니다\n.", num);
		}
	}*/
	//while(1) { } = 항상 참(1)이므로 무한반복


	/*int num = -1;

	do {
		printf("-1입력시 종료");
		scanf_s("%d", &num);
	} while (num != -1);*/

	//1~5까지 출력하는 코드를 while문으로 작성하기

	/*int num = 1;
	while (num <= 5) {
		printf("%d\n", num);
		num++;
	}*/

	//1~10까지 총합을 구하는 코드를 while문으로 작성하기

	//int total = 0;
	//int num = 1;
	//while (num < 11) {
	//	total += num; //total = total + num;
	//	num++;
	//}
	//printf("1~10까지의 총합 : %d\n", total);

	//10~1까지 거꾸로 출력하는 코드를 while문으로 작성하기
	/*int num = 10;
	while (num > 0) {
		printf("%d ", num);
		num--;
	}*/

	//1부터 10까지 홀수만 출력하는 코드를 while문으로 작성하기

	/*int num1 = 1;
	while (num1 < 11) {
		if (num1 % 2 == 1) {
			printf("%d ", num1);
		}
		num1++;
	}*/
	

    //1부터 100까지 7의 배수만 촐력하는 코드 작성하기

	/*int num3 = 1;
	while (num3 < 100) {
		if (num3 % 7 == 0) {
			printf("%d", num3);
		}
		num3++
	}*/


	//구구단 5단 출력하기

	//int dan = 5; //단
	//
	//int num4 = 1; //시작값
	//
	//while (num4 < 10) {
	//	printf("%d * %d = %d\n", dan, num4, dan * num4);
	//	num4++;
	//}

	//A B C D 출력하기
	
	int ch = 65;
	while (ch < 69) {
		printf("%c ",(char)ch);
		ch++;
	}
}