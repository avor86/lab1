#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define LastName "���������"
#define FirstName "�����"
#define Group "��-22"
#define Faculty "���"
#define University "�ϲ ���� ����� ѳ���������"
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    unsigned int age = 18;
    unsigned int semestr;
    float admissionScore;
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    int grade5;
    double averageGrade;

    printf("%s %s ��������� ������� 䳿.\n", FirstName, LastName);
    printf("������ ����� ��������: ");
    scanf("%u", &semestr);
    printf("������ ��� �������� ���: ");
    scanf("%f", &admissionScore);
    printf("������ ������ �� ����������: ");
    scanf("%d", &grade1);
    printf("������ ������ �� ������: ");
    scanf("%d", &grade2);
    printf("������ ������ �� ��������� ����: ");
    scanf("%d", &grade3);
    printf("������ ������ �� ��������� ����: ");
    scanf("%d", &grade4);
    printf("������ ������ �� ������ ������: ");
    scanf("%d", &grade5);
    printf("������ ��� ��: ");
    scanf("%u", &age);

    averageGrade = (double)(grade1 + grade2 + grade3+ grade4+ grade5) / 5;

    system("CLS");
    printf("%s", University);
    printf("\n%s", Faculty);
    printf("\n%s", Group);
    printf("\n---------------------------");
    printf("\n�������: %s %s", FirstName, LastName );
    printf("\n��: %u", age);
    printf("\n�������: %u", semestr);
    printf("\n---------------------------");
    printf("\n�������� ���: %.1f", admissionScore);
    printf("\n��� ������� ���  = %.2f", averageGrade);
    printf("\n");
    return 0;
}
