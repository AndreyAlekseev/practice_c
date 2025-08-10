#include <stdio.h>
//Ввести три числа и найти наибольшее из них

int main() 
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("%d\n", max);
    return 0;
}
