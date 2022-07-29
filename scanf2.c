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
	scanf("%hd%*c", &num1);          //hd   //100[Enter]에서 %*c가 [Enter]를 버려줌

	printf("input char ? ");
	scanf(" %c", &ch);           //공백지정자 : %c앞에 공백을 하나 줌
								 //공백지정자를 넣어주면 문자인 엔터를 자동으로 버려줌

	printf("input  int ? ");
	scanf("%d", &num2);				//엔터, 공백, space를 자동으로 버려줌
	

	printf("input long  int ? ");
	scanf("%ld", &num3);		 //ld    //엔터, 공백, space를 자동으로 버려줌
	
    printf("input float ? ");
	scanf("%f", &f_num);			//엔터, 공백, space를 자동으로 버려줌

    printf("input double ? ");
	scanf("%lf", &d_num);           //lf

	printf("ch: %c, num1 : %hd, num2 : %d, num3: %ld, f_num : %f , d_num : %lf \n",
		                       ch, num1, num2, num3, f_num, d_num );

	return 0 ;
}
