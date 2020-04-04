#include <stdio.h> //stdio.h라는 헤더파일을 포함시킨다

int main(void) {
    char ch;  //문자형 변수 ch 선언
    int num;  //정수형 변수 num 선언
    double x; //실수형 변수 x 선언

    printf("char형의 바이트 크기: %d\n", sizeof(char));               //sizeof 연산자로 구한 char형의 바이트값을 문구와 함께 출력한다

    printf("short형의 바이트 크기: %d\n", sizeof(short));             //sizeof 연산자로 구한 short형의 바이트값을 문구와 함께 출력한다
    printf("int형의 바이트 크기: %d\n", sizeof(int));                 //sizeof 연산자로 구한 int형의 바이트값을 문구와 함께 출력한다
    printf("long형의 바이트 크기: %d\n", sizeof(long));               //sizeof 연산자로 구한 long형의 바이트값을 문구와 함께 출력한다
    printf("long long형의 바이트 크기: %d\n", sizeof(long long));     //sizeof 연산자로 구한 long long형의 바이트값을 문구와 함께 출력한다

    printf("float형의 바이트 크기: %d\n", sizeof(float));             //sizeof 연산자로 구한 float형의 바이트값을 문구와 함께 출력한다
    printf("double형의 바이트 크기: %d\n", sizeof(double));           //sizeof 연산자로 구한 double형의 바이트값을 문구와 함께 출력한다
    printf("long double형의 바이트 크기: %d\n", sizeof(long double)); //sizeof 연산자로 구한 long double형의 바이트값을 문구와 함께 출력한다

    printf("ch 변수의 바이트 크기: %d\n", sizeof ch);                 //sizeof 연산자로 구한 문자형 변수 ch의 바이트값을 문구와 함께 출력한다
    printf("num 변수의 바이트 크기: %d\n", sizeof num);               //sizeof 연산자로 구한 정수형 변수 num의 바이트값을 문구와 함께 출력한다
    printf("x 변수의 바이트 크기: %d\n", sizeof x);                   //sizeof 연산자로 구한 실수형 변수 x의 바이트값을 문구와 함께 출력한다

    return 0; //값을 반환하고 프로그램 종료
}