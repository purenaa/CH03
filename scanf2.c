#include <stdio.h>

int main()
{
	char ch;				//A
	short int num1;			//100
	int num2;				//200
	long int num3;			//300 
	float f_num;			//1.1
	double d_num;			//5.2

    

	printf("input short int ? ");
	scanf("%hd%*c", &num1);          //hd   //100[Enter]���� %*c�� [Enter]�� ������

	printf("input char ? ");
	scanf(" %c", &ch);           //���������� : %c�տ� ������ �ϳ� ��
								 //���������ڸ� �־��ָ� ������ ���͸� �ڵ����� ������

	printf("input  int ? ");
	scanf("%d", &num2);				//����, ����, space�� �ڵ����� ������
	

	printf("input long  int ? ");
	scanf("%ld", &num3);		 //ld    //����, ����, space�� �ڵ����� ������
	
    printf("input float ? ");
	scanf("%f", &f_num);			//����, ����, space�� �ڵ����� ������

    printf("input double ? ");
	scanf("%lf", &d_num);           //lf

	printf("ch: %c, num1 : %hd, num2 : %d, num3: %ld, f_num : %f , d_num : %lf \n",
		                       ch, num1, num2, num3, f_num, d_num );

	return 0 ;
}
