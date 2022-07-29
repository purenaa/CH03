#include <stdio.h> //입,출력과 관련된 함수 정보를 제공함
//# : 전처리문( ; 으로 끝난지 않는다)

funcA()//호출될 때 실행하는 함수
{
	printf("funcA() start. \n");
	printf("funcA() end. \n");
}


//함수의 집합
int main() //(함수 중에서)자동으로 실행하는 진입점 함수
{
	printf("main() start. \n");
	funcA(); //함수호출
	printf("main() end. \n");

	return 0;
}

