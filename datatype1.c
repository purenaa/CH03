#include <stdio.h>

#define EQ "==============" //��ũ�� ���
#define MSG "������ c ����" //��ũ�� ���
#define SUM(x,y) x+y	   //��ũ�� ���

//#���� �����ϴ� ������ ��ó�����̶� �Ѵ�( ; ���� ������ �ʴ´�.)

int main()
{
	printf("C ����� �ڷ���(DataType) \n");
	
	//������ �迭�� ������ �ڷ����� ũ�⸸ŭ �޸𸮸� �Ҵ�ް�,
	//�����Ϸ����� �ڷ����� �˸���.
	char ch;
	int age = 20;  //�ʱ�ȭ
	double height = 175.1;
	const float PI = 3.14159; //������ ���ȭ(�ݵ�� �ʱ�ȭ)
	
	printf("%s \n", EQ);
	printf("%s \n", MSG);
	ch = 'A';
	printf("������ �� : %c, %d, %1f, %f \n", ch, age, height, PI);
	printf("������ �ּ� : %p, %p, %p, %p \n", &ch, &age, &height, &PI);

	age = 27;
	//PI = 1.5; //���ȭ�Ǿ ���� ���� �� �� ����
	printf("%c, %d, %1f, %f \n", ch, age, height, PI);

	printf("%d, %d, %d \n", sizeof(char), sizeof(int),sizeof(double));
	printf("%d, %d, %d \n", sizeof(ch), sizeof(age), sizeof(height));

	printf("%d \n", SUM(100, 200));
	printf("%s \n", EQ);

	return 0;
}