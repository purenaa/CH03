//operator3.c
#include <stdio.h>

int main()
{
	int x;

	printf("���� ? (0:��,1:��) ");
	scanf("%d", &x);

	
	printf("%s \n", x==0 ? "����" : (x==1 ? "����" : "�Է¿���!!"));

	int n1 = 100, n2 = 200;
	int sum = 0;

	sum += n1;			//sum = sum + n1
	sum += n2;
	printf("sum : %d \n", sum);

	return 0;
}