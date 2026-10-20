#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    char q;
    int a, n;

    do 
    {
        double P = 1.0;
        printf("Введите значение a: ");
        scanf("%d", &a);
        printf("Введите значение n: ");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            P = P * (a - i * n);
        }

        printf("Значение произведения ряда: %.2lf\n", P);
        printf("Хотите продолжить? (Да - любой символ кроме '0'/ Нет - '0'). Ваш ответ:");
        scanf(" %c", &q);
    }
    while (q != '0');
    printf("Программа завершена.");
       
    return 0;
}