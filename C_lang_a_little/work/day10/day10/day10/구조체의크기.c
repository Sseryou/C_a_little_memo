#include <stdio.h>

struct teacher {
	char name[11]; //11byte
	char address[30]; //30byte
	char tel[11]; //11byte
	char lesson[20]; //20byte

}; //72byte




void main() {
	//printf("sizeof(struct Teacher) : %d\n", sizeof(struct teacher)); //72byte

	struct teacher tear;
	//printf("sizeof(tear) : %d\n", sizeof(tear));

	printf("name : ");
	scanf_s("%s", tear.name);
	printf("address : ");
	scanf_s(" %s", tear.address);
	printf("tel : ");
	scanf_s(" %s", tear.tel);
	printf("lesson : ");
	scanf_s(" %s", tear.lesson);

	printf("이름 : %s\n주소 : %s\n연락처 : %s\n강의 : %s\n", tear.name, tear.address, tear.tel, tear.lesson);


}