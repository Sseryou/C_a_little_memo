#include <stdio.h>

void main() {

	/*int num;

	printf("�����Է� : ");
	scanf("%d", &num);

	int absolute = num > 0 ? num : num * -1;
	printf("���밪 : %d\n", absolute);*/

	//printf("--------------------------------------------\n");
	//����ڿ��� 2���� ���ڸ� �Է¹޾� ������ ����, �� ���� �� ū �� ���
	/*int num1;
	int num2;
	printf("ù��° ���� �Է����ּ��� : \n");
	scanf("%d", &num1);
	printf("2��° ���� �Է����ּ��� : \n");
	scanf("%d", &num2);

	int result = num1>num2 ? num1 : num2;

	printf("�� ū �� : %d\n", result);
	*/

	
	//����ڿ��� �����ϸ� y�� �Է��ϰ� �������� ������ N��
	//�Է¹޾�, ����ڿ��� ���� ���θ� �Է¹޴� ���α׷��� ��������.
	//Y, N �̿��� ���� �Է������� �߸��Է��ϼ̽��ϴ�. ��� ����ϱ�

	//N�� Y�� �ƹ��ų���
	/*char agree;
	printf("�����Ͻðڽ��ϱ�? Y, N : ");
	scanf("%c", &agree);

	printf("%s", agree == 'Y' ? "����ڴ� �����Ͽ����ϴ�." : agree == 'N' ? "����ڴ� �������� �����̽��ϴ�." : "�߸��Է��ϼ̽��ϴ�.");*/
	//���׿����ڸ� 2�� ���ļ� �� ��� ����

	//������ ����
	//�� ��� �������� �Ϸ翡 5,7,5���� �����
	//�Ϸ翡 ����Ǵ� �� ���Ͼ�
	//�ð��� �����Ǵ� �� ���Ͼ�

	//���� :
	//�ð��� ���귮 :
	
	int pear = 5;
	int apple = 7;
	int orange = 5;
	int daytoproduce =  ("%d", pear + apple + orange);
	float timetoproduce = ((float)daytoproduce / 24); 
	//���� / ���� -> ����
	//�Ǽ� / ���� , ����/ �Ǽ� , �Ǽ�/ �Ǽ� -> �Ǽ�

	printf("���� :  %d\n", daytoproduce);
	printf("�ð��� ���귮 : %.4f\n", timetoproduce);



}