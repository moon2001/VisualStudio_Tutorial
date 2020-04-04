#include <stdio.h> //stdio.h라는 헤더파일을 포함시킨다

int main(void)
{
    char bell = '\a'; //문자형 변수 bell을 선언하고 특수문자 \a를 할당한다
    printf("%c프로그램을 시작합니다.\n", bell); //특수문자 \a의 경고음과 함께 문구를 출력하고 \n을 통해 줄바꿈 시킨다

    printf("c:\\work\\chap03\\Ex03_06\\Debug\n"); //문구를 출력하고 \n을 통해 줄바꿈 시킨다

    printf("\t탭 문자를 출력합니다.\n"); //특수문자 \t가 탭 문자를 출력하고 문구를 출력시킨 뒤 \n을 통해 줄바꿈 시킨다

    return 0; //값을 반환하고 프로그램 종료
}