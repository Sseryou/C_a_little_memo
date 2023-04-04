#include <stdio.h>

void main() {
	/*int num = 10;
	int* pnum;
	pnum = &num;
	printf("num : %d\n", *pnum);
	*pnum = 20;
	printf("num : %d\n", *pnum);
	(*pnum)++; (*pnum)++;
	printf("num : %d\n", *pnum);*/

	/*int* p1 = 1000;
	int* p2 = 1000;

	printf("[연산전] p1 : %d, p2: %d\n", p1, p2);

	p1++;
	p2--;
	
	printf("[연산후] p1 : %d, p2; %d\n", p1, p2);*/

	int* pi = 100;
	char* pc = 100;
	double* pd = 100;
	float* pf = 100;

	printf("pi : %d\n", pi);
	printf("pi + 1 : %d\n", pi + 1);

	printf("pc : %d\n", pc);
	printf("pc + 1 : %d\n", pc + 1);

	printf("pd : %d\n", pd);
	printf("pd + 1 : %d\n", pd + 1);

	printf("pf : %d\n", pf);
	printf("pf + 1 : %d\n", pf + 1);



}