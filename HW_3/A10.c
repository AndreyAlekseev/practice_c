#include <stdio.h>

int main() 
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);  // Ввод пяти чисел
    
    int min = a;  // Предполагаем, что первое число минимальное
    
    if (b < min) min = b;  // Сравниваем со вторым числом
    if (c < min) min = c;  // Сравниваем с третьим числом
    if (d < min) min = d;  // Сравниваем с четвёртым числом
    if (e < min) min = e;  // Сравниваем с пятым числом
    
    printf("%d\n", min);  // Вывод минимального числа
    
    return 0;
}