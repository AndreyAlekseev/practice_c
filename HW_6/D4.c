#include <stdio.h>

//функция для вывода цифр числа в прямом порядке
void print_num(int num) {
    if (num < 10) {                   // Если число однозначное
        printf("%d ", num);           
    } else {                          // Если число многозначное
        print_num(num / 10);          // Сначала выводим все цифры кроме последней
        printf("%d ", num % 10);      // Затем выводим последнюю цифру
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    
    print_num(n);
    printf("\n");
    
    return 0;
}