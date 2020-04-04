#include <stdio.h> //stdio.h라는 헤더파일을 포함시킨다

int main(void)
{
    char n = 128;          //정수형 변수 n을 선언하고 값 할당
    unsigned char m = 256; //부호없는 정수형 변수 m을 선언하고 값 할당
    char x = -129;         //정수형 변수 x를 선언하고 값 할당
    unsigned char y = -1;  //부호없는 정수형 변수 y를 선언하고 값 할당

    printf("n = %d\n", n); //부호있는 정수형 char의 유효범위인 127보다 크므로 오버플로우가 발생한다
    printf("m = %d\n", m); //부호없는 정수형 char의 유효범위인 255보다 크므로 오버플로우가 발생한다
    printf("x = %d\n", x); //부호있는 정수형 char의 유효범위인 -128보다 작으므로 언더플로우가 발생한다
    printf("y = %d\n", y); //부호없는 정수형 char의 유효범위인 0보다 작으므로 언더플로우가 발생한다

    return 0; //값을 반환하고 프로그램 종료
}