#include <stdio.h>

int main() 
{
    int number, sum = 0;
    scanf("%d", &number);
    
    // Обрабатываем случай, если число равно 0
    if (number == 0) {
        sum = 0;
    }
    else {
        // Вычисляем сумму цифр
        while (number > 0) {
            sum += number % 10;  // Получаем последнюю цифру
            number /= 10;       // Убираем последнюю цифру
        }
    }
    
    printf("%d\n", sum);
    return 0;
}