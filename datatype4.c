#include <stdio.h>

int main()
{
	int x;  //������
	float y;  //�Ǽ���

	x = 100, y = 30.0;

	printf("%d \n", x / 30);     //���Ʒ� �ǿ����ڰ� �ٸ�
	printf("%f \n", x / y);      //�׷��� ������ ����ȯ�� �̷����

	printf("%f \n", (float)x / 30);     //����� ����ȯ
	//�ǿ����� �տ� �ڷ����� ���� ���� cast������(����ȯ ������)�����

	//����ȯ �����ڴ� �� ���� �����Ҷ��� ��� �ڷ����� �ٲ�� ����� �Ŀ� ������� ���ƿ�

	typedef long long int lo_int;     //typedef��
	
	long long int n1 = 2700000000;
	printf("%lld \n", n1);

	lo_int n2 = 2800000000;
	printf("%lld \n", n2);


	return 0;
}