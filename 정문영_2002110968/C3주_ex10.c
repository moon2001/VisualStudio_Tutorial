#include <stdio.h> //stdio.h라는 헤더파일을 포함시킨다

int main(void)
{
    printf("sizeof(\'a'\) = %d\n", sizeof('a'));         //char형이나 정수의 승격으로 인해 int형이 되었으므로 4바이트
    printf("sizeof(12345) = %d\n", sizeof(12345));       //데이터형이 int이므로 4바이트
    printf("sizeof(12345U) = %d\n", sizeof(12345U));     //데이터형이 unsigned int이므로 4바이트
    printf("sizeof(12345L) = %d\n", sizeof(12345L));     //데이터형이 long이므로 4바이트

    printf("sizeof(12.34F) = %d\n", sizeof(12.34F));     //데이터형이 float이므로 4바이트
    printf("sizeof(12.34567) = %d\n", sizeof(12.34567)); //데이터형이 double이므로 8바이트
    printf("sizeof(1.234e-5) = %d\n", sizeof(1.234e-5)); //데이터형이 double이므로 8바이트

    printf("sizeof(\"abcde\") = %d\n", sizeof("abcde")); //문자열 "abcde"에 문자열의 끝을 나타내는 널 문자를 합하여 6바이트

    return 0; //값을 반환하고 프로그램 종료
}