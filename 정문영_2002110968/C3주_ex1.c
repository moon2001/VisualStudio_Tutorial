#include <stdio.h> //stdio.h��� ��������� ���Խ�Ų��

int main(void) {
    char ch;  //������ ���� ch ����
    int num;  //������ ���� num ����
    double x; //�Ǽ��� ���� x ����

    printf("char���� ����Ʈ ũ��: %d\n", sizeof(char));               //sizeof �����ڷ� ���� char���� ����Ʈ���� ������ �Բ� ����Ѵ�

    printf("short���� ����Ʈ ũ��: %d\n", sizeof(short));             //sizeof �����ڷ� ���� short���� ����Ʈ���� ������ �Բ� ����Ѵ�
    printf("int���� ����Ʈ ũ��: %d\n", sizeof(int));                 //sizeof �����ڷ� ���� int���� ����Ʈ���� ������ �Բ� ����Ѵ�
    printf("long���� ����Ʈ ũ��: %d\n", sizeof(long));               //sizeof �����ڷ� ���� long���� ����Ʈ���� ������ �Բ� ����Ѵ�
    printf("long long���� ����Ʈ ũ��: %d\n", sizeof(long long));     //sizeof �����ڷ� ���� long long���� ����Ʈ���� ������ �Բ� ����Ѵ�

    printf("float���� ����Ʈ ũ��: %d\n", sizeof(float));             //sizeof �����ڷ� ���� float���� ����Ʈ���� ������ �Բ� ����Ѵ�
    printf("double���� ����Ʈ ũ��: %d\n", sizeof(double));           //sizeof �����ڷ� ���� double���� ����Ʈ���� ������ �Բ� ����Ѵ�
    printf("long double���� ����Ʈ ũ��: %d\n", sizeof(long double)); //sizeof �����ڷ� ���� long double���� ����Ʈ���� ������ �Բ� ����Ѵ�

    printf("ch ������ ����Ʈ ũ��: %d\n", sizeof ch);                 //sizeof �����ڷ� ���� ������ ���� ch�� ����Ʈ���� ������ �Բ� ����Ѵ�
    printf("num ������ ����Ʈ ũ��: %d\n", sizeof num);               //sizeof �����ڷ� ���� ������ ���� num�� ����Ʈ���� ������ �Բ� ����Ѵ�
    printf("x ������ ����Ʈ ũ��: %d\n", sizeof x);                   //sizeof �����ڷ� ���� �Ǽ��� ���� x�� ����Ʈ���� ������ �Բ� ����Ѵ�

    return 0; //���� ��ȯ�ϰ� ���α׷� ����
}