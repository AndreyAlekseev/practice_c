#include <stdio.h>

void print_numbers(int n) {
    if (n > 0) {           // Условие выхода из рекурсии
        print_numbers(n - 1);  // Сначала печатаем предыдущие числа
        printf("%d ", n);      // Затем печатаем текущее число
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    
    print_numbers(n);
    
    return 0;
}