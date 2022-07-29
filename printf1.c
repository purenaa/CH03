#include <stdio.h>

int main()
{
    printf("%d \n",555);
    printf("/%d/ \n",555);
    printf("/%10d/ \n",555);         //오른쪽 정렬
    printf("/%-10d/ \n",555);        //왼쪽 정렬
    printf("/%010d/ \n\n",555);      //빈 공간 0으로 채움

    printf("/%f/ \n",8192.1978);
    printf("/%13f/ \n",8192.1978);
    printf("/%*.*f/ \n",13,2,8192.1978);  // /%12.2f/랑 결과값이 동일
    printf("/%13.2f/ \n",8192.1978);      //13자리 중에 소수점 2자리까지만 출력 //오른쪽 정렬
    printf("/%-13.2f/ \n\n",8192.1978);   //왼쪽 정렬

    printf("%c %d %c %d \n",'A','A',97,97);
    printf("%s \n", "C Language...");
    printf("%20s\n", "C Language...");
    printf("%.5s \n\n", "C Language...");    //5자리만 찍는다.

    printf("%d %o %x \n",67,67,67);            //67을 10진수, 8진수, 16진수로 출력하라
    printf("%d %#o %#x \n",067,067,067);       //숫자 앞에 0이 붙으면 8진수를 의미 
                                               //#을 붙이면 결과 값에 진법을 나타낼 수 있다.
    printf("%d %#o %#x \n",0x67,0x67,0x67);    //숫자 앞에 0x이 붙으면 16진수를 의미
	printf("%x, %#10x, %#010x \n\n", 0x1234, 0x1234, 0x1234); 

    return 0 ;
}

