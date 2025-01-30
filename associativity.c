#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;
    int result;

    result = a - b - c; // Left to right associativity

    // Breakdown of associativity:
    // 1. First subtraction: a - b = 10 - 5 = 5
    // 2. Second subtraction: 5 - c = 5 - 2 = 3

    printf("Result: %d\n", result); // Output: 3

    return 0;
}