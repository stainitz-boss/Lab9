#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    char s;
    int h, i, j;
    
    printf("Введите символ из которого будет строиться фигура:\n");
    scanf(" %c", &s);
    
    printf("Введите высоту:\n");
    scanf("%d", &h);
    
    printf("Равнобедренный треугольник:\n");
    
    for (i = 1; i <= h; i++) {
        for (j = 0; j < h - i; j++) {
            printf(" ");
        }
        
        for (j = 0; j < 2 * i - 1; j++) {
            if (j == 0 || j == 2 * i - 2 || i == h) {
                printf("%c", s);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
