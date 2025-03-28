#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Invalid input! Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Factorial of %d is: %llu\n", num, factorial(num));

    return 0;
}
