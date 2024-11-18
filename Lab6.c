#include <stdio.h>
#include <stdlib.h>
// LUIS CHAVEZ 11/10/24
/* 
This program is for lab 6 and willmplementing a function that takes in an array of
numbers and finds all numbers in the array that are prime numbers.\

*/ 

// Function to check if prime.
int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Function to find primes.
int* find_primes(int* arr, int size, int* prime_count) {
    int* primes = (int*)malloc(size * sizeof(int));
    *prime_count = 0;

    // loop for adding the prime nums to the array and updating the counter
    for (int i = 0; i < size; i++) {
        if (is_prime(*(arr + i))) {
            *(primes + (*prime_count)) = *(arr + i);
            (*prime_count)++;
        }
    }
    return primes;

}
// Mqin function, Hopefully should work
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // array of pointers
    int* arr = (int*)malloc(n * sizeof(int));
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    // counter for prime nums
    int prime_count;
    int* primes = find_primes(arr, n, &prime_count);

    // print statement
    printf("Prime numbers in the array:\n");
    for (int i = 0; i < prime_count; i++) {
        printf("%d ", *(primes + i));
    }
    printf("\n");

    // free mem
    free(arr);
    free(primes);
    return 0;
}
