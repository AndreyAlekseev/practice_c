#include <stdio.h>

int abs(int x) {
    return x < 0 ? -x : x;
}

int main() 
{
    int n;
    scanf("%d", &n);
    printf("%d\n", abs(n));
    return 0;
}