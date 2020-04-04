#include <stdio.h>  //stdio.h라는 헤더파일을 포함시킨다
#include <limits.h> //limits.h라는 헤더파일을 포함시킨다
#include <float.h>  //float.h라는 헤더파일을 포함시킨다

int main(void)
{
    char a = CHAR_MAX;      //char형의 최댓값을 구한다
    char b = CHAR_MAX + 1;  //char형의 최댓값을 구한 뒤 1을 더한다
    short c = SHRT_MAX;     //short형의 최댓값을 구한다
    short d = SHRT_MAX + 1; //short형의 최댓값을 구한 뒤 1을 더한다
    int e = INT_MAX;        //int 형의 최댓값을 구한다
    int f = INT_MAX + 1;    //int 형의 최댓값을 구한 뒤 1을 더한다
    float g = FLT_MAX;      //float형의 최댓값을 구한다
    float h = FLT_MAX * 10; //float형의 최댓값을 구한 뒤 10을 곱한다

    printf("a = %d, b = %d\n", a, b);           //a는 127, b는 -128로 출력
    printf("c = %d, d = %d\n", c, d);           //c는 32767, d는 -32768로 출력
    printf("e = %d, f = %d\n", e, f);           //e는 2147483647, f는 -2147483648로 출력
    printf("g = %30.25e, h = %30.25e\n", g, h); //g는 3.4028234663852885981170418e+38, h는 inf(무한대)로 출력

    return 0; //값을 반환하고 프로그램 종료
}