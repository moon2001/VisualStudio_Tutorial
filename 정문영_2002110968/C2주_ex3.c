#include <stdio.h> //stdio.h��� ��������� ���Խ�Ų��

int main()
{
    int num = 12345; //������ ���� num �����ϰ� 12345 ����

    printf("%d\n", num);           //12345 ���
    printf("%d\n", num * 10);      //123450 ���
    printf("%d\n", num * 100);     //1234500 ���
    printf("%d\n", num * 1000);    //12345000 ���

    printf("%8d\n", num);          //   12345 ���
    printf("%8d\n", num * 10);     //  123450 ���
    printf("%8d\n", num * 100);    // 1234500 ���
    printf("%8d\n", num * 1000);   //12345000 ���
    printf("%8d\n", num * 100000); //1234500000 ���

    printf("%08d\n", num);         //00012345 ���

    return 0; //���� ��ȯ�ϰ� ���α׷� ����
}