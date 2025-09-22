#include <stdio.h>

//функция для вычисления суммы чисел от 1 до N
int sum_to_n(int n) {
    if (n == 1) {          // Базовый случай: сумма чисел от 1 до 1 равна 1
        return 1;
    } else {               // Рекурсивный случай: сумма(n) = n + сумма(n-1)
        return n + sum_to_n(n - 1);
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    
    int result = sum_to_n(n);
    printf("%d\n", result);
    
    return 0;
}