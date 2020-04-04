#include <stdio.h>  //stdio.h��� ��������� ���Խ�Ų��
#include <limits.h> //limits.h��� ��������� ���Խ�Ų��
#include <float.h>  //float.h��� ��������� ���Խ�Ų��

int main(void)
{
    char a = CHAR_MAX;      //char���� �ִ��� ���Ѵ�
    char b = CHAR_MAX + 1;  //char���� �ִ��� ���� �� 1�� ���Ѵ�
    short c = SHRT_MAX;     //short���� �ִ��� ���Ѵ�
    short d = SHRT_MAX + 1; //short���� �ִ��� ���� �� 1�� ���Ѵ�
    int e = INT_MAX;        //int ���� �ִ��� ���Ѵ�
    int f = INT_MAX + 1;    //int ���� �ִ��� ���� �� 1�� ���Ѵ�
    float g = FLT_MAX;      //float���� �ִ��� ���Ѵ�
    float h = FLT_MAX * 10; //float���� �ִ��� ���� �� 10�� ���Ѵ�

    printf("a = %d, b = %d\n", a, b);           //a�� 127, b�� -128�� ���
    printf("c = %d, d = %d\n", c, d);           //c�� 32767, d�� -32768�� ���
    printf("e = %d, f = %d\n", e, f);           //e�� 2147483647, f�� -2147483648�� ���
    printf("g = %30.25e, h = %30.25e\n", g, h); //g�� 3.4028234663852885981170418e+38, h�� inf(���Ѵ�)�� ���

    return 0; //���� ��ȯ�ϰ� ���α׷� ����
}