//getchar1.c
#include <stdio.h>

int main()
{
	char c1, c2;

	printf("input c1 ? ");
	c1 = getchar();			//A[Enter]를 입력  //ABCDEFG[enter]입력했을 시 while (getchar() != '\n'); 사용
	printf("c1: %c\n", c1);

	getchar();        //Enter를 버리기 위해 사용(한 문자만 지울 수 있음)
	//while (getchar() != '\n');     //버퍼에 남아 있는 거를 다 지울 때 사용

	printf("input c2 ? ");
	c2 = getchar();
	printf("c2: %c\n", c2);


	return 0;

}