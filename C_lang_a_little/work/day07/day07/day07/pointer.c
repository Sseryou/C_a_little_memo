#include <stdio.h>

void main() {
	//int num = 30; //������ �����͸� �����ϴ� ����
	//int* pnum; //������ �����͸� ������ �� �ִ� ������ ���� ����
	//pnum = &num; //������ �ּҰ��� ������ ������ ����

	//printf("�ּҰ� : %p", pnum);

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

	//�����Ϸ��� bit���� ���� 4 �Ǵ� 8�� ���� �� �ִ�.


	//char cnum = 5;
	//int inum = 999;
	//double dnum = 3.14;

	////������ ���� �ʱ�ȭ
	//char* pcnum = &cnum;
	//int* pinum = &inum;
	//double* pdnum = &dnum;

	//printf("%p\n", pcnum);
	//printf("%p\n", pinum);
	//printf("%p\n", pdnum);

	//printf("\n");

	//int x = 10;
	//int* px = &x; //x�� �ּҰ��� �����ϴ� ������ ���� px
	//
	//printf("%d\n", &x);
	//printf("%d\n", px);
	//printf("%d\n", *px); //�����ͺ��� �տ��� ���̴� *�� ��������������
	//printf("%d\n", x + 1);
	//printf("%d\n", px + 1);

	//printf("\n");

	//char ch = 'a';
	//char* pch = &ch;
	//printf("%p\n", pch);
	//printf("%p\n", pch + 1);

	////�������������ڷ� ���� ���� �����غ���
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