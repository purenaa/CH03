//operator2.c
#include <stdio.h>

int main()
{
	int x = 70, y = 150;

	//���迬���� : �� ���� ���Ͽ� ��(1) �Ǵ� ����(0)�� ��ȯ
	printf("%d \n", x > y);
	printf("%d \n", x < y);
	printf("%d \n", x == y);
	printf("%d \n\n", x != y);

	//���������� : �� �������� ���Ͽ� ���ο� ��(1) �Ǵ� ����(0)�� ��ȯ
	//			  �������� ������ ���ϰ��� �� �� ���
	printf("%d \n", x >= 100 && y >= 100);
	printf("%d \n", x >= 100 || y >= 100);
	x = 0;
	printf("%d, %d \n", !x, !y);

	return 0;

}