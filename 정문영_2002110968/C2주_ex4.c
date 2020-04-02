#include <stdio.h> //stdio.h라는 헤더파일을 포함시킨다

int main()
{
    float x; //실수형 변수 x 선언

    x = 12.34567;         //x에 12.34567 저장
    printf("%f\n", x);    //12.345670 출력
    printf("%.2f\n", x);  //12.35 출력
    printf("%8.2f\n", x); //   12.35 출력

    return 0; //값을 반환하고 프로그램 종료
}