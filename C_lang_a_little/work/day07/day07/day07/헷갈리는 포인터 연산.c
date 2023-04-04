#include <stdio.h>

void main() {

	int x = 100;
	int* px = &x;

	//초기값 출력
	printf("x : %d\n", x);
	printf("&x : %d\n", &x);
	printf("*px : %d\n", *px);
	printf("px : %d\n", px);
	printf("\n");

	//1) px++ 주소증가, 쓰레기값...
	px++;
	printf("x : %d\n", x);
	printf("&x : %d\n", &x);
	printf("*px : %d\n", *px);
	printf("px : %d\n", px);
	printf("\n");

	//2)*px++ 값 그대로, 주소 증가
	px = &x;

	printf("x : %d\n", x);
	printf("&x : %d\n", &x);
	printf("*px : %d\n", *px);
	printf("*px++ : %d\n", *px++);
	printf("px : %d\n", px);
	printf("*px : %d\n", *px); //쓰레기값
	printf("\n");

	//3) (*px)++;
	px = &x;
	(*px)++;

	printf("x : %d\n", x);
	printf("&x : %d\n", &x);
	printf("*px : %d\n", *px);
	printf("px : %d\n", px);
	printf("\n");

    
	


}