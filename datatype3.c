#include <stdio.h>

int main()
{
	short int n1;       //short자료형 지정자는 %hd로 쓴다
	int n2;				//int자료형 지정자는 %d로  쓴다
	long int n3;	    //long자료형 지정자는 %ld로  쓴다
	long long int n4;   //long long자료형 지정자는 %lld 로 쓴다

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