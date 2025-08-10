#include <stdio.h>

int main() 
{
    int number_one, number_two;
    scanf("%d %d", &number_one, &number_two);  // Ввод числа
    if (number_one >= number_two){
        printf("%d %d\n", number_two,number_one);
    } else {
        printf("%d %d\n", number_one,number_two);
    }
    
    return 0;
}
