#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    // Выводим первый квадрат без пробела перед ним
    printf("%d", a * a);
    
    // Выводим остальные квадраты с пробелами перед ними
    for (int i = a + 1; i <= b; i++) {
        printf(" %d", i * i);
    }
    
    printf("\n");  // Переход на новую строку в конце
    return 0;
}