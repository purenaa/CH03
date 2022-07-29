#include <stdio.h>

int main()
{
	int x;  //정수형
	float y;  //실수형

	x = 100, y = 30.0;

	printf("%d \n", x / 30);     //위아래 피연산자가 다름
	printf("%f \n", x / y);      //그래서 묵시적 형변환이 이루어짐

	printf("%f \n", (float)x / 30);     //명시적 형변환
	//피연산자 앞에 자료형이 오는 것은 cast연산자(형변환 연산자)라고함

	//형변환 연산자는 그 식을 적용할때만 잠깐 자료형이 바뀌고 수행된 후엔 원래대로 돌아옴

	typedef long long int lo_int;     //typedef문
	
	long long int n1 = 2700000000;
	printf("%lld \n", n1);

	lo_int n2 = 2800000000;
	printf("%lld \n", n2);


	return 0;
}