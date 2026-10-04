/*
 * Lab 2, Task 1
 * Name: Nihad İbadzade
 * Student ID: 251ADB064
 */

#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main(void) {
    int n;

    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: n must be >= 1\n");
        return 1;
    }

    printf("Sum: %d\n", sum_to_n(n));
    return 0;
}
