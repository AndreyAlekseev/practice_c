#include <stdio.h>

//функция для перевода числа в двоичную систему
void decimal_to_binary(int n) {
    if (n > 1) {                    // Если число больше 1
        decimal_to_binary(n / 2);   // Рекурсивно обрабатываем целую часть от деления на 2
    }
    printf("%d", n % 2);            // Выводим остаток от деления на 2 (0 или 1)
}

int main() 
{
    int n;
    scanf("%d", &n);
    
    if (n == 0) {                   // обработка n = 0
        printf("0");
    } else {
        decimal_to_binary(n);
    }
    
    printf("\n");
    return 0;
}