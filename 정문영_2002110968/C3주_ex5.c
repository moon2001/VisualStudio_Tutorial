#include <stdio.h> //stdio.h라는 헤더파일을 포함시킨다

int main(void)
{
    char ch, prev_ch, next_ch; //문자형 변수 ch, prev_ch, next_ch를 선언한다

    printf("문자? "); //"문자? "문구를 출력한다
    scanf("%c", &ch); //변수 ch에 입력받은 값을 저장한다

    prev_ch = ch - 1; //입력받은 문자의 아스키 코드값에 -1을 더한다
    next_ch = ch + 1; //입력받은 문자의 아스키 코드값에 1을 더한다
    printf("prev_ch = %c, %d, %#02x\n", prev_ch, prev_ch, prev_ch); //각각 변수 prev_ch의 문자, 정수, 16진수 0x60을 출력한다
    printf("ch = %c, %d, %#02x\n", ch, ch, ch);                     //각각 변수 ch의 문자, 정수, 16진수 0x61을 출력한다
    printf("next_ch = %c, %d, %#02x\n", next_ch, next_ch, next_ch); //각각 변수 next_ch의 문자, 정수, 16진수 0x62를 출력한다

    return 0; //값을 반환하고 프로그램 종료
}