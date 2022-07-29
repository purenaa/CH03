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
	
	printf("두 수를 입력하세요 ? ");		//100 200입력
	scanf("%d%d", &first, &second);

	printf("first : %d, second : %d \n", first, second);
}

void func_2(void)
{
     int first, second;
	 char op = 0;
	 
	 printf("전화번호를 입력하세요 ? ");        //3429-5114입력
	 //scanf("%d%c%d", &first, &op, &second);
	 scanf("%d%*c%d", &first, &second);    // %*c는 한 문자를 버려라는 의미

	 printf("first : %d, second : %d \n", first, second);
	 printf("op: %d, %c \n", op, op);
}

void func_3(void)			//12345678
{
     int first, second;
	 
	 printf("5자리이상 숫자를 입력하세요 ? ");
	 scanf("%3d%d", &first, &second);     
	 //%3d%d는 앞의 3자리를 first에 넣고 나머지를 second에 넣겠다는 의미
	 
	 printf("first : %d, second : %d \n", first, second);
}
