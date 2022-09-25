#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define LastName "Краєвський"
#define FirstName "Артур"
#define Group "РЕ-22"
#define Faculty "РТФ"
#define University "КПІ імені Ігоря Сікорського"
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

    printf("%s %s виконайте наступні дії.\n", FirstName, LastName);
    printf("Введіть номер семестру: ");
    scanf("%u", &semestr);
    printf("Введіть свій вступний бал: ");
    scanf("%f", &admissionScore);
    printf("Введіть оцінку за математику: ");
    scanf("%d", &grade1);
    printf("Введіть оцінку за фізику: ");
    scanf("%d", &grade2);
    printf("Введіть оцінку за українську мову: ");
    scanf("%d", &grade3);
    printf("Введіть оцінку за англійську мову: ");
    scanf("%d", &grade4);
    printf("Введіть оцінку за історію україни: ");
    scanf("%d", &grade5);
    printf("Введіть свій вік: ");
    scanf("%u", &age);

    averageGrade = (double)(grade1 + grade2 + grade3+ grade4+ grade5) / 5;

    system("CLS");
    printf("%s", University);
    printf("\n%s", Faculty);
    printf("\n%s", Group);
    printf("\n---------------------------");
    printf("\nстудент: %s %s", FirstName, LastName );
    printf("\nвік: %u", age);
    printf("\nсеместр: %u", semestr);
    printf("\n---------------------------");
    printf("\nвступний бал: %.1f", admissionScore);
    printf("\nваш середній бал  = %.2f", averageGrade);
    printf("\n");
    return 0;
}
