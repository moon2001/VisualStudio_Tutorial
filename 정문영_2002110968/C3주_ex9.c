#include <stdio.h> //stdio.h��� ��������� ���Խ�Ų��

int main(void)
{
    int amount = 0;      //������ ���� amount�� �����ϰ� �� �Ҵ�
    int price = 0;       //������ ���� price�� �����ϰ� �� �Ҵ�
    int total_price = 0; //������ ���� total_price�� �����ϰ� �� �Ҵ�

    printf("amount = %d, price = %d\n", amount, price); //������ ������ ���� amount, price �� ���

    printf("����? ");     //���� ���
    scanf("%d", &amount); //������ ���� amount �� �Է�
    price = 2000;         //������ ���� price �� �Ҵ�

    total_price = amount * price;        //total_price�� amount�� price�� ���� ���� ����
    printf("�հ�: %d��\n", total_price); //������ ������ ���� total_price ���

    return 0; //���� ��ȯ�ϰ� ���α׷� ����
}