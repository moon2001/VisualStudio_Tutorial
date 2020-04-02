#include <stdio.h> //stdio.h라는 헤더파일을 포함시킨다

int main()
{
    int num = 12345; //정수형 변수 num 선언하고 12345 저장

    printf("%d\n", num);           //12345 출력
    printf("%d\n", num * 10);      //123450 출력
    printf("%d\n", num * 100);     //1234500 출력
    printf("%d\n", num * 1000);    //12345000 출력

    printf("%8d\n", num);          //   12345 출력
    printf("%8d\n", num * 10);     //  123450 출력
    printf("%8d\n", num * 100);    // 1234500 출력
    printf("%8d\n", num * 1000);   //12345000 출력
    printf("%8d\n", num * 100000); //1234500000 출력

    printf("%08d\n", num);         //00012345 출력

    return 0; //값을 반환하고 프로그램 종료
}