#include <stdio.h> //stdio.h라는 헤더파일을 포함시킨다

int main(void)
{
    int amount = 0, price = 0;   //정수형 변수 amount, price 선언
    const double VAT_RATE = 0.1; //기호상수를 이용하여 실수형 변수 VAT_RATE를 선언하고 값 할당
    int total_price = 0;         //정수형 변수 total_price 선언

    printf("수량? ");     //문구 출력
    scanf("%d", &amount); //정수형 변수 amount 값 입력

    printf("단가? ");     //문구 출력
    scanf("%d", &price);  //정수형 변수 price 값 입력

    total_price = amount * price * (1 + VAT_RATE); //변수 amount, price, (1 + VAT_RATE)를 곱한 값을 total_price에 저장
    printf("합계: %d원\n", total_price);           //total_price값을 문구와 함께 출력

    return 0; //값을 반환하고 프로그램 종료
}