#include <stdio.h> //stdio.h라는 헤더파일을 포함시킨다


int main()
{
    int num; //정수형 변수 선언

    printf("정수? ");  //"정수? "라는 문구를 출력한다
    scanf("%d", &num); //정수를 입력하면 num에 저장한다

    //"10진수 (num값)는 16진수 (num값의 16진수)입니다."라는 문구를 출력하고 줄바꿈 시킨다
    printf("10진수 %d는 16진수 %x입니다.\n", num, num);

    return 0; //값을 반환하고 프로그램 종료
}