#include <stdio.h>
// LUIS C 9-24-24
// Function declarations
long int Recursion(int n);
long int noRecursion(int n);

// Main function
int main() {
    int n;
    char choice;

    // INPUT
    printf("Please enter a number in the range of 1 to 15: ");
    scanf("%d", &n);

    // Check if input is valid
    if (n < 1 || n > 15) {
        printf("Invalid input. Please enter an integer from 1 to 15.\n");
        return 1; // Exit if the input is invalid
    }

    // User enters choice
    printf("Do you want to use Recursion? (Y/N): ");
    scanf(" %c", &choice);

    // PROCESSING and OUTPUT
    long int result;

    if (choice == 'Y' || choice == 'y') {
        result = Recursion(n);
        printf("Here is your answer using recursion: %ld\n", result);
    } else if (choice == 'N' || choice == 'n') {
        result = noRecursion(n);
        printf("Here is your answer NOT using recursion: %ld\n", result);
    } else {
        printf("Invalid choice. Please enter 'Y' or 'N'.\n");
    }

    return 0;
}

// Recursive function
long int Recursion(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case
    }
    return n * Recursion(n - 1); // Recursive case
}

// Non-recursive function
long int noRecursion(int n) {
    long int fact = 1;
    for (int i = 2; i <= n; i++) { // Change to <= n to include n
        fact *= i; // Corrected missing semicolon
    }
    return fact;
}


