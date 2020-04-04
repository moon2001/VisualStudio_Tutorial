#include <stdio.h> //stdio.h��� ��������� ���Խ�Ų��

int main(void)
{
    printf("sizeof(\'a'\) = %d\n", sizeof('a'));         //char���̳� ������ �°����� ���� int���� �Ǿ����Ƿ� 4����Ʈ
    printf("sizeof(12345) = %d\n", sizeof(12345));       //���������� int�̹Ƿ� 4����Ʈ
    printf("sizeof(12345U) = %d\n", sizeof(12345U));     //���������� unsigned int�̹Ƿ� 4����Ʈ
    printf("sizeof(12345L) = %d\n", sizeof(12345L));     //���������� long�̹Ƿ� 4����Ʈ

    printf("sizeof(12.34F) = %d\n", sizeof(12.34F));     //���������� float�̹Ƿ� 4����Ʈ
    printf("sizeof(12.34567) = %d\n", sizeof(12.34567)); //���������� double�̹Ƿ� 8����Ʈ
    printf("sizeof(1.234e-5) = %d\n", sizeof(1.234e-5)); //���������� double�̹Ƿ� 8����Ʈ

    printf("sizeof(\"abcde\") = %d\n", sizeof("abcde")); //���ڿ� "abcde"�� ���ڿ��� ���� ��Ÿ���� �� ���ڸ� ���Ͽ� 6����Ʈ

    return 0; //���� ��ȯ�ϰ� ���α׷� ����
}