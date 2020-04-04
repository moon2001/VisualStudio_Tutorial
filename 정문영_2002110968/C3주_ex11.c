#include <stdio.h> //stdio.h라는 헤더파일을 포함시킨다
#define PI 3.14 //매크로 상수 PI 선언하고 값 할당

int main(void)
{
    double radius = 0; //실수형 변수 radius 선언하고 값 할당
    double area = 0;   //실수형 변수 area 선언하고 값 할당

    printf("반지름? ");                 //문구 출력
    scanf("%lf", &radius);             //실수형으로 값 입력
    area = PI * radius * radius;       //매크로 상수 PI와 실수형 radius를 곱하여 area에 저장
    printf("원의 면적: %.2f\n", area); //문구와 area값을 출력
    printf("PI = %.2f\n", PI);        //매크로 상수 값을 문구와 함께 출력

    return 0; //값을 반환하고 프로그램 종료
}