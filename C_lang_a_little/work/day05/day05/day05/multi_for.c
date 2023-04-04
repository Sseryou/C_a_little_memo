#include<stdio.h>

void main() {

	// 1 1 
	// 1 2
	// 1 3 
	// 2 1
	//....
	//3 1
	//3 2
	//3 3

	/*for (int i = 1; i < 4; i++) {
		for (int j = 1; j < 4; j++) {
			printf("%d %d\n", i, j);
		}
		printf("\n");
	}*/
	
	//1 1 1 1
	//1 1 1 1 
    //1 1 1 1
	//1 1 1 1 

	/*for (int i = 1; i < 2; i++) {
		for (int j = 1; j < 5; j++) {
			printf("%d %d %d %d\n", i, i, i, i);
		}
	}*/

	//1 2 3 4
	//1 2 3 4
	//1 2 3 4
	//1 2 3 4

	/*for (int i = 0; i < 3; i++) {
		printf("\n");
		for (int j = 1; j < 5; j++) {
			printf("%d ", j);
		}
	}*/
	

	//1 2 3 4
	//5 6 7 8
	//9 10 11 12

	/*int p = 0;
	for (int i = 0; i < 3; i++) {
		printf("\n");
		for (int j = 0; j < 4; j++) {
			printf("%02d ", p += 1);
		}
	}*/

	// A B C D
	// E F G H
	// I J K L

	/*char ch = 'A';
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf(" %c ", ch++);
		}
		printf("\n");
	}*/

	// *
	// * *
	// * * *
	// * * * *
	// * * * * *

	
	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j<=i; j++) {
			printf("* ");
		}
		printf("\n");
	}*/

	//         *
	//       * *
	//     * * *
	//   * * * *
	// * * * * *

	//for (int i = 0; i < 5; i++) {
	//	for (int j = 0; j < 5-(i+1); j++) {
	//		printf(" ");
	//	}
	//	for (int k = 1; k <= i+1; k++) {
	//		//별표 찍어주기( 중간공백 포함)
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	/*1 2 3 4 5 6 7 8 9 10
2 3 4 5 6 7 8 9 10 1
3 4 5 6 7 8 9 10 1 2
4 5 6 7 8 9 10 1 2 3
5 6 7 8 9 10 1 2 3 4
6 7 8 9 10 1 2 3 4 5
7 8 9 10 1 2 3 4 5 6
8 9 10 1 2 3 4 5 6 7
9 10 1 2 3 4 5 6 7 8
10 1 2 3 4 5 6 7 8 9*/


for (int i = 1; i <= 10; i++) {
	for (int j = 0; j < 10; j++) {
		int num = i + j;
		if (num > 10) {
			num -= 10;
		}
		printf("%d ", num);
	}
	printf("\n");
}
	

}