#include <stdio.h> //stdio.h��� ��������� ���Խ�Ų��

int main(void)
{
    int amount = 0, price = 0;   //������ ���� amount, price ����
    const double VAT_RATE = 0.1; //��ȣ����� �̿��Ͽ� �Ǽ��� ���� VAT_RATE�� �����ϰ� �� �Ҵ�
    int total_price = 0;         //������ ���� total_price ����

    printf("����? ");     //���� ���
    scanf("%d", &amount); //������ ���� amount �� �Է�

    printf("�ܰ�? ");     //���� ���
    scanf("%d", &price);  //������ ���� price �� �Է�

    total_price = amount * price * (1 + VAT_RATE); //���� amount, price, (1 + VAT_RATE)�� ���� ���� total_price�� ����
    printf("�հ�: %d��\n", total_price);           //total_price���� ������ �Բ� ���

    return 0; //���� ��ȯ�ϰ� ���α׷� ����
}