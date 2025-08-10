#include <stdio.h>

int main() 
{
    int number;
    scanf("%d", &number);  // Ввод трёхзначного числа
    
    // Разделяем число на цифры
    int digit1 = number / 100;        // Первая цифра (сотни)
    int digit2 = (number / 10) % 10;  // Вторая цифра (десятки)
    int digit3 = number % 10;         // Третья цифра (единицы)
    
    int product = digit1 * digit2 * digit3;  // Произведение цифр
    
    printf("%d\n", product);  // Вывод произведения
    
    return 0;
}