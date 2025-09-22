#include <stdio.h>

int f(int x) {
    if (x < -2) {
        return 4;
    } else if (x < 2) {  // -2 <= x < 2
        return x * x;
    } else {             // x >= 2
        return x * x + 4 * x + 5;
    }
}

int main() 
{
    int number;
    int max_value = -1000000;
    
    while (1) {
        scanf("%d", &number);
        if (number == 0) break;
        
        int result = f(number);
        if (result > max_value) {
            max_value = result;
        }
    }
    
    printf("%d\n", max_value);
    return 0;
}