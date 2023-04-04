#include <stdio.h>

void main() {

	//%d, %f, %c, %s
	
	//자동형변환
	double number = 10;
	printf("%.1lf\n", number);

	int number2 = 5.4321;
	printf("%d\n", number2);

	//강제형변환
	printf("%d\n", (short)3.1415);
	printf("%d\n", (int)3.1415);
	printf("%f\n", (double)10);
	printf("%f\n", (float)10);



	

	

}