#include <stdio.h>

void main() {
	//사용자로부터 알파벳 입력받는 프로그램 만들기
	//사용자는 무제한으로 알파벳 입력가능
	//사용자가 입력한 알파벳이 대문자면 프로그램 종료

	/*실행 예
	입력하세요 : a
	a 입력했습니다.
	입력하세요 : u
	u 입력했습니다.
	입력하세요 : R
	 R 입력했습니다. 종료합니다.*/


	char ch;
	while (1) {
		
		printf("입력하세요 : ");
		scanf_s(" %c\n", &ch);

		if (ch >= 'a' && ch <'z') {
			printf("%c 입력했습니다.\n", ch);
			continue;
		} else {
			printf("%c 입력했습니다. 종료합니다.", ch);
			break;
		}
	
		
		
		
	}


	}