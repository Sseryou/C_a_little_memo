#include <stdio.h>

void main() {

	int x = 100;
	int* px = &x;

	//�ʱⰪ ���
	printf("x : %d\n", x);
	printf("&x : %d\n", &x);
	printf("*px : %d\n", *px);
	printf("px : %d\n", px);
	printf("\n");

	//1) px++ �ּ�����, �����Ⱚ...
	px++;
	printf("x : %d\n", x);
	printf("&x : %d\n", &x);
	printf("*px : %d\n", *px);
	printf("px : %d\n", px);
	printf("\n");

	//2)*px++ �� �״��, �ּ� ����
	px = &x;

	printf("x : %d\n", x);
	printf("&x : %d\n", &x);
	printf("*px : %d\n", *px);
	printf("*px++ : %d\n", *px++);
	printf("px : %d\n", px);
	printf("*px : %d\n", *px); //�����Ⱚ
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