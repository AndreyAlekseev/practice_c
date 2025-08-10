#include <stdio.h>

int main() 
{
    int number;
    scanf("%d", &number);  // Ввод трёхзначного числа
    
    // Разделяем число на цифры
    int digit1 = number / 100;        // Первая цифра (сотни)
    int digit2 = (number / 10) % 10;  // Вторая цифра (десятки)
    int digit3 = number % 10;         // Третья цифра (единицы)
    
    // Находим максимальную цифру
    int max = digit1;
    if (digit2 > max) max = digit2;
    if (digit3 > max) max = digit3;
    
    printf("%d\n", max);
    
    return 0;
}