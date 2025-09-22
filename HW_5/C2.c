#include <stdio.h>

int power(int n, int p) {
    // Любое число в степени 0 равно 1
    if (p == 0) {
        return 1;
    }
    
    int result = n;
    
    // Умножаем p-1 раз
    for (int i = 1; i < p; i++) {
        result = result * n;
    }
    
    return result;
}

int main() 
{
    int number, exponent;
    scanf("%d %d", &number, &exponent);
    
    int answer = power(number, exponent);
    printf("%d\n", answer);
    
    return 0;
}