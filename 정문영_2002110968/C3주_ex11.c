#include <stdio.h> //stdio.h��� ��������� ���Խ�Ų��
#define PI 3.14 //��ũ�� ��� PI �����ϰ� �� �Ҵ�

int main(void)
{
    double radius = 0; //�Ǽ��� ���� radius �����ϰ� �� �Ҵ�
    double area = 0;   //�Ǽ��� ���� area �����ϰ� �� �Ҵ�

    printf("������? ");                 //���� ���
    scanf("%lf", &radius);             //�Ǽ������� �� �Է�
    area = PI * radius * radius;       //��ũ�� ��� PI�� �Ǽ��� radius�� ���Ͽ� area�� ����
    printf("���� ����: %.2f\n", area); //������ area���� ���
    printf("PI = %.2f\n", PI);        //��ũ�� ��� ���� ������ �Բ� ���

    return 0; //���� ��ȯ�ϰ� ���α׷� ����
}