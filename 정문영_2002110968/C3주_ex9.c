#include <stdio.h> //stdio.h라는 헤더파일을 포함시킨다

int main(void)
{
    int amount = 0;      //정수형 변수 amount를 선언하고 값 할당
    int price = 0;       //정수형 변수 price를 선언하고 값 할당
    int total_price = 0; //정수형 변수 total_price를 선언하고 값 할당

    printf("amount = %d, price = %d\n", amount, price); //문구와 정수형 변수 amount, price 값 출력

    printf("수량? ");     //문구 출력
    scanf("%d", &amount); //정수형 변수 amount 값 입력
    price = 2000;         //정수형 변수 price 값 할당

    total_price = amount * price;        //total_price에 amount와 price를 곱한 값을 저장
    printf("합계: %d원\n", total_price); //문구와 정수형 변수 total_price 출력

    return 0; //값을 반환하고 프로그램 종료
}