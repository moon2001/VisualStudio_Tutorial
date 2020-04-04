#include <stdio.h> //stdio.h라는 헤더파일을 포함시킨다

int main(void)
{
    short a = -10;                  //부호 있는 정수형 a 선언하고 값 할당
    unsigned short b = 65526;       //부호 없는 정수형 b 선언하고 값 할당

    printf("a = %d, %08x\n", a, a); //각각 정수, -10의 2진 표현을 출력한다
    printf("b = %u, %08x\n", b, b); //각각 부호 없는 정수, 65526의 2진 표현을 출력한다

    return 0; //값을 반환하고 프로그램 종료
}