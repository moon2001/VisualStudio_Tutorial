#include <stdio.h> //stdio.h라는 헤더파일을 포함시킨다

int main(void)
{
    float pi1 = 3.141592653589793;  //실수형 변수 pi1을 선언하고 값 할당
    double pi2 = 3.141592653589793; //실수형 변수 pi2를 선언하고 값 할당

    printf("float 형의 pi 값 : %30.25f\n", pi1);  //소수점 아래 25자리까지 출력한다
    printf("double 형의 pi 값 : %30.25f\n", pi2); //소수점 아래 25자리까지 출력한다

    return 0; //값을 반환하고 프로그램 종료
}