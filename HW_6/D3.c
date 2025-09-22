#include <stdio.h>

//функция для вывода цифр числа в обратном порядке
void reverse_digits(int n) {
    if (n < 10) {                   // Если число однозначное
        printf("%d ", n);           // Просто выводим его
    } else {                        // Если число многозначное
        printf("%d ", n % 10);      // Выводим последнюю цифру
        reverse_digits(n / 10);     // Рекурсивно обрабатываем оставшуюся часть
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    
    reverse_digits(n);
    printf("\n");
    
    return 0;
}