#include <stdio.h> //��,��°� ���õ� �Լ� ������ ������
//# : ��ó����( ; ���� ������ �ʴ´�)

funcA()//ȣ��� �� �����ϴ� �Լ�
{
	printf("funcA() start. \n");
	printf("funcA() end. \n");
}


//�Լ��� ����
int main() //(�Լ� �߿���)�ڵ����� �����ϴ� ������ �Լ�
{
	printf("main() start. \n");
	funcA(); //�Լ�ȣ��
	printf("main() end. \n");

	return 0;
}

