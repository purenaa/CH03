#include <stdio.h>
void func_1(void);
void func_2(void);
void func_3(void);

int main(void)
{
	
	//func_1();
	//func_2();
	func_3();

	return 0 ;

}

void func_1(void)
{
    int first, second;
	
	printf("�� ���� �Է��ϼ��� ? ");		//100 200�Է�
	scanf("%d%d", &first, &second);

	printf("first : %d, second : %d \n", first, second);
}

void func_2(void)
{
     int first, second;
	 char op = 0;
	 
	 printf("��ȭ��ȣ�� �Է��ϼ��� ? ");        //3429-5114�Է�
	 //scanf("%d%c%d", &first, &op, &second);
	 scanf("%d%*c%d", &first, &second);    // %*c�� �� ���ڸ� ������� �ǹ�

	 printf("first : %d, second : %d \n", first, second);
	 printf("op: %d, %c \n", op, op);
}

void func_3(void)			//12345678
{
     int first, second;
	 
	 printf("5�ڸ��̻� ���ڸ� �Է��ϼ��� ? ");
	 scanf("%3d%d", &first, &second);     
	 //%3d%d�� ���� 3�ڸ��� first�� �ְ� �������� second�� �ְڴٴ� �ǹ�
	 
	 printf("first : %d, second : %d \n", first, second);
}
