#include <stdio.h>

typedef struct {
	char name[30];
	char actor[30];
}MOVIE;

void main() {
	MOVIE movies[3]; //movies[0], movies[1], movies[2]

	//name, actor�� Ű���忡�� �Է¹޾ƺ���.
	for (int i = 0; i < 3; i++) {
		printf("%d, ��ȭ���� : ", i + 1);
		scanf("%s", movies[i].name);
		printf("%d, ��ȭ��� : ", i + 1);
		scanf("%s", movies[i].actor);

	}
	printf("--------------------movie info----------------------");
	for (int i = 0; i < 3; i++) {
		printf("%d�� ��ȭ���� : %s\n", i + 1, movies[i].name);
			printf("%d�� ��ȭ��� : %s\n", i + 1, movies[i].actor);
	}

}