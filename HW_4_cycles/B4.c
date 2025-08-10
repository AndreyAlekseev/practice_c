#include <stdio.h>

int main() 
{
    int number;
    scanf("%d", &number);
    
    // Проверяем диапазон трехзначных чисел
    if (number >= 100 && number <= 999) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}