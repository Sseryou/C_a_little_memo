#include <stdio.h>

struct Member {
	char name[20];
	char phone[15];
	int age;
	double height;
};




void main() {
	//1. ����ü ����
	struct Member member1;

	//1-1. ����ü ���� �ʱ�ȭ�ϱ�
	struct Member member2 = { "��浿", "010-2222-2222", 35, 164.8 };

	//2. ������ ����ü ���� �� �ʵ忡 �� �����ϱ�
	strcpy(member1.name, "ȫ�浿");
	strcpy(member1.phone, "010-1111-1111");
	member1.age = 20;
	member1.height = 185.5;


	printf("member1.name : %s\n", member1.name);
	printf("member1.phone : %s\n", member1.phone);
	printf("member1.age : %d\n", member1.age);
	printf("member1.height : %.1f\n", member1.height);
	printf("\n");
	printf("member2.name : %s\n", member2.name);
	printf("member2.phone : %s\n", member2.phone);
	printf("member2.age : %d\n", member2.age);
	printf("member2.height : %.1f\n", member2.height);



}