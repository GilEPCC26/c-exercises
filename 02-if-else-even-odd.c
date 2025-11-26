#include <stdio.h>

// Practice exercise: if/else with arithmetic.
// Goal: read an integer and report whether it is zero, even, or odd.
// TODOs for you:
// 1) After reading number, use an if/else chain to check three cases:
//    - number is zero
//    - number is even (divisible by 2)
//    - number is odd (everything else)
// 2) Print a different line for each case.
// Expected example outputs:
// - Input: 0  -> "Zero is even."
// - Input: 7  -> "7 is odd."
// - Input: 42 -> "42 is even."
// Hint: use the remainder operator % to test divisibility by 2.
int main(void) {
    int number = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Add your if/else statements here to print the correct message.
    if (number == 0) {
        printf("Zero is even.\n");
    } else if (number % 2 == 0) {
        // If we reach this line, the number is not 0, and the remainder when divided by 2 is 0 (it's even).
        printf("%d is even.\n", number);
    } else {
        // If neither of the above is true, the number must be odd.
        printf("%d is odd.\n", number);
    }

    return 0;
}
