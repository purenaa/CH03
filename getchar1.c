//getchar1.c
#include <stdio.h>

int main()
{
	char c1, c2;

	printf("input c1 ? ");
	c1 = getchar();			//A[Enter]�� �Է�  //ABCDEFG[enter]�Է����� �� while (getchar() != '\n'); ���
	printf("c1: %c\n", c1);

	getchar();        //Enter�� ������ ���� ���(�� ���ڸ� ���� �� ����)
	//while (getchar() != '\n');     //���ۿ� ���� �ִ� �Ÿ� �� ���� �� ���

	printf("input c2 ? ");
	c2 = getchar();
	printf("c2: %c\n", c2);


	return 0;

}