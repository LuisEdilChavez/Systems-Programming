#include <stdio.h>
// LC 10/14/22 LAB FOUR
// THIS program will reverse the number a user enters between 100 and 10000.
// It will print the number, I didnt use pointers as I just thought only functions was needed.
// Function to reverse the UserNumber
int reverseNumber(int UserNum) {
    int reversed = 0;
    while (UserNum != 0) {
        reversed = reversed * 10 + UserNum % 10;
        UserNum /= 10;
    }
    return reversed;
}

int main() {
    int UserNum;
    do {
        printf("Enter a UserNumber between 100 and 10,000: ");
        scanf("%d", &UserNum);

        if (UserNum < 100 || UserNum > 10000) {
            printf("Invalid input. ");
        }
    } while (UserNum < 100 || UserNum > 10000);

    printf("Reversed UserNumber: %d\n", reverseNumber(UserNum));

    return 0;
}
