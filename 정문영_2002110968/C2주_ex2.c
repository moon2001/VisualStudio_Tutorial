#include <stdio.h> //stdio.h��� ��������� ���Խ�Ų��

int main()
{
    int num; //������ ���� num ����
    float x; //�Ǽ��� ���� x ����
    char ch; //������ ���� ch ����

    num = 123; //num�� 123 ����
    x = 1.23;  //x�� 1.23 ����
    ch = 'A';  //ch�� A ����

    printf("%d %x\n", num, num); //123 7b ���
    printf("%f %e\n", x, x);     //1.230000 1.230000e+00 ���
    printf("%c \n", ch);         //A ���

    printf("%x\n", num);         //7b ���
    printf("%X\n", num);         //7B ���
    printf("%#x\n", num);        //0x7b ���
    printf("%#X\n", num);        //0x7B ���

    return 0; //���� ��ȯ�ϰ� ���α׷� ����
}