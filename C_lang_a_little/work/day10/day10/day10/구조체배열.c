#include <stdio.h>

typedef struct {
	char name[30];
	char actor[30];
}MOVIE;

void main() {
	MOVIE movies[3]; //movies[0], movies[1], movies[2]

	//name, actor를 키보드에서 입력받아보자.
	for (int i = 0; i < 3; i++) {
		printf("%d, 영화제목 : ", i + 1);
		scanf("%s", movies[i].name);
		printf("%d, 영화배우 : ", i + 1);
		scanf("%s", movies[i].actor);

	}
	printf("--------------------movie info----------------------");
	for (int i = 0; i < 3; i++) {
		printf("%d번 영화제목 : %s\n", i + 1, movies[i].name);
			printf("%d번 영화배우 : %s\n", i + 1, movies[i].actor);
	}

}