#include <stdio.h>

int main()
{
	short int n1;       //short�ڷ��� �����ڴ� %hd�� ����
	int n2;				//int�ڷ��� �����ڴ� %d��  ����
	long int n3;	    //long�ڷ��� �����ڴ� %ld��  ����
	long long int n4;   //long long�ڷ��� �����ڴ� %lld �� ����

	printf("%d, %d, %d, %d \n", sizeof(n1), sizeof(n2), 
		                        sizeof(n3), sizeof(n4));

	signed char c1 = 'A';
	unsigned char c2 = 97;

	printf("%d, %d \n", sizeof(c1), sizeof(c2));

	float f1 = 123456789123456789;
	double d1 = 123456789123456789;

	printf("f1: %f \n", f1);
	printf("d1: %f \n", d1);

	return 0;
}