#include <stdio.h>

int findFirstDigit(int num) {
    while (num >= 10) {
        num /= 10;
    }
    return num;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int firstDigit = findFirstDigit(num);

    printf("The first digit of %d is: %d\n", num, firstDigit);

    return 0;
}
