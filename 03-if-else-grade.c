#include <stdio.h>

// Practice exercise: longer if/else chains.
// Goal: read a test score (0-100) and print a letter grade message.
// TODOs for you:
// 1) After reading score, add an if/else-if/else chain that prints
//    messages for A (90-100), B (80-89), C (70-79), D (60-69),
//    and F (below 60).
// 2) Include the score in the output so students see what was graded.
// Example outputs to mirror:
// - Input: 95 -> "Score 95: A - Excellent!"
// - Input: 73 -> "Score 73: C - Keep practicing."
// - Input: 42 -> "Score 42: F - Needs more study."
// Hint: check the highest scores first so lower ranges do not run too early.
int main(void) {
    int score = 0;

    printf("Enter a score between 0 and 100: ");
    scanf("%d", &score);

    // Insert your if/else-if/else chain here.
    if (score >= 90) {
        printf("Score %d: A - Excellent!\n", score);
    } else if (score >= 80) {
        // If we get here, we know the score is less than 90, so the 80-89 range is covered.
        printf("Score %d: B - Great job.\n", score);
    } else if (score >= 70) {
        // If we get here, we know the score is less than 80, so the 70-79 range is covered.
        printf("Score %d: C - Keep practicing.\n", score);
    } else if (score >= 60) {
        // If we get here, we know the score is less than 70, so the 60-69 range is covered.
        printf("Score %d: D - Needs improvement.\n", score);
    } else {
        // If none of the above are true, the score is below 60.
        printf("Score %d: F - Needs more study.\n", score);
    }

    return 0;
}
