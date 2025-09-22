#include <stdio.h>

// Функция для вычисления среднего арифметического двух чисел
int middle(int a, int b) {
    int result = (a + b) / 2;
    return result;
}

int main() 
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    int average = middle(num1, num2);
    printf("%d\n", average);
    
    return 0;
}