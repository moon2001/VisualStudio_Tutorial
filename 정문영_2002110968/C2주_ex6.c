#include <stdio.h>

int main()
{
    char name[20]; //문자 20개를 연속으로 저장하는 변수
    int age;       //정수형 변수 선언
    char gender;   //문자형 변수 선언

    printf("이름, 나이, 성별(M/F) 순으로 입력하세요.\n"); //"이름, 나이, 성별(M/F) 순으로 입력하세요"라는 문구를 출력하고 줄바꿈시킨다
    scanf("%s %d %c", name, &age, &gender);             //문자열, 정수, 문자를 입력받고 name, age, gender에 저장한다.

    printf("이름: %s\n", name);   //"이름: (name값)"을 출력하고 줄바꿈시킨다
    printf("나이: %d\n", age);    //"나이: (age값)"을 출력하고 줄바꿈시킨다
    printf("성별: %c\n", gender); //"성별: (gender값)"을 출력하고 줄바꿈시킨다

    return 0; //값을 반환하고 프로그램 종료
}