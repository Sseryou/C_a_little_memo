#include <stdio.h>

void main() {
	//int num = 30; //정수형 데이터를 저장하는 변수
	//int* pnum; //정수형 데이터를 저장할 수 있는 포인터 변수 선언
	//pnum = &num; //변수의 주소값을 포인터 변수에 저장

	//printf("주소값 : %p", pnum);

	/*int* pa;
	char* pb;
	double* pc;
	float* pd;
	long* pe;

	printf("sizeof(pa)=%d\n", sizeof(pa));
	printf("sizeof(pb)=%d\n", sizeof(pb));
	printf("sizeof(pc)=%d\n", sizeof(pc));
	printf("sizeof(pd)=%d\n", sizeof(pd));
	printf("sizeof(pe)=%d\n", sizeof(pe));*/

	//컴파일러의 bit수에 따라 4 또는 8이 나올 수 있다.


	//char cnum = 5;
	//int inum = 999;
	//double dnum = 3.14;

	////포인터 변수 초기화
	//char* pcnum = &cnum;
	//int* pinum = &inum;
	//double* pdnum = &dnum;

	//printf("%p\n", pcnum);
	//printf("%p\n", pinum);
	//printf("%p\n", pdnum);

	//printf("\n");

	//int x = 10;
	//int* px = &x; //x의 주소값을 저장하는 포인터 변수 px
	//
	//printf("%d\n", &x);
	//printf("%d\n", px);
	//printf("%d\n", *px); //포인터변수 앞에서 쓰이는 *를 간접참조연산자
	//printf("%d\n", x + 1);
	//printf("%d\n", px + 1);

	//printf("\n");

	//char ch = 'a';
	//char* pch = &ch;
	//printf("%p\n", pch);
	//printf("%p\n", pch + 1);

	////간접참조연산자로 직접 값에 접근해보기
	//printf("\n");

	//int num2 = 5;
	//int* pnum2 = &num2;
	//*pnum2 = 10;

	//printf("%d\n", *pnum2);


	int i = 10;
	int* pi = &i;
	char c = 'A';
	char* pc = &c;
	double d = 3.14;
	double* pd = &d;
	float f = 3.14f;
	float* pf = &f;

	printf("*pi:%d\n", *pi);
	printf("*pc:%c\n", *pc);
	printf("*pd:%lf\n", *pd);
	printf("*pf:%f\n", *pf);

		





}