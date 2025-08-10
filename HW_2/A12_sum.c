#include <stdio.h>

int main() 
{
    int number;
    scanf("%d", &number);  // Ввод трёхзначного числа
    
    // Разделяем число на цифры
    int digit1 = number / 100;        // Первая цифра
    int digit2 = (number / 10) % 10;  // Вторая цифра
    int digit3 = number % 10;         // Третья цифра
    
    int sum = digit1 + digit2 + digit3;  // Сумма цифр
    
    printf("%d\n", sum);  // Вывод суммы
    
    return 0;
}