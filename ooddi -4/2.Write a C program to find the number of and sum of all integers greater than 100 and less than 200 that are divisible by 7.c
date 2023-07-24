#include <stdio.h>

int main() {
    int start = 101; // Start from 101 because we want integers greater than 100.
    int end = 200;
    int divisor = 7;

    int count = 0; // To count the numbers divisible by 7.
    int sum = 0;   // To store the sum of numbers divisible by 7.

    for (int num = start; num < end; num++) {
        if (num % divisor == 0) {
            count++;
            sum += num;
        }
    }

    printf("Number of integers greater than 100 and less than 200 divisible by 7:%d\n", count);
    printf("Sum of the integers divisible by 7: %d\n", sum);

    return 0;
}
