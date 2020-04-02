#include <stdio.h> //stdio.h라는 헤더파일을 포함시킨다

int main()
{
    int num; //정수형 변수 num 선언
    float x; //실수형 변수 x 선언
    char ch; //문자현 변수 ch 선언

    num = 123; //num에 123 저장
    x = 1.23;  //x에 1.23 저장
    ch = 'A';  //ch에 A 저장

    printf("%d %x\n", num, num); //123 7b 출력
    printf("%f %e\n", x, x);     //1.230000 1.230000e+00 출력
    printf("%c \n", ch);         //A 출력

    printf("%x\n", num);         //7b 출력
    printf("%X\n", num);         //7B 출력
    printf("%#x\n", num);        //0x7b 출력
    printf("%#X\n", num);        //0x7B 출력

    return 0; //값을 반환하고 프로그램 종료
}