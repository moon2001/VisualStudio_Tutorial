#include <stdio.h> //stdio.h��� ��������� ���Խ�Ų��

int main(void)
{
    char ch, prev_ch, next_ch; //������ ���� ch, prev_ch, next_ch�� �����Ѵ�

    printf("����? "); //"����? "������ ����Ѵ�
    scanf("%c", &ch); //���� ch�� �Է¹��� ���� �����Ѵ�

    prev_ch = ch - 1; //�Է¹��� ������ �ƽ�Ű �ڵ尪�� -1�� ���Ѵ�
    next_ch = ch + 1; //�Է¹��� ������ �ƽ�Ű �ڵ尪�� 1�� ���Ѵ�
    printf("prev_ch = %c, %d, %#02x\n", prev_ch, prev_ch, prev_ch); //���� ���� prev_ch�� ����, ����, 16���� 0x60�� ����Ѵ�
    printf("ch = %c, %d, %#02x\n", ch, ch, ch);                     //���� ���� ch�� ����, ����, 16���� 0x61�� ����Ѵ�
    printf("next_ch = %c, %d, %#02x\n", next_ch, next_ch, next_ch); //���� ���� next_ch�� ����, ����, 16���� 0x62�� ����Ѵ�

    return 0; //���� ��ȯ�ϰ� ���α׷� ����
}