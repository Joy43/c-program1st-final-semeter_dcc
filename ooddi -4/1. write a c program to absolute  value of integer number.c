#include <stdio.h>
#include <math.h>

int main() {
    double num;
    printf("দয়া করে একটি সম্পূর্ণসংখ্যা লিখুন: ");
    scanf("%lf", &num);

    double absoluteValue = fabs(num); // পরম মান গণনা

    printf("পরম মান: %lf\n", absoluteValue);

    return 0;
}

// #include <stdio.h>

// int absValue(int num) {
//     if (num < 0) {
//         return -num; // If the number is negative, return its negation (absolute value).
//     } else {
//         return num;  // If the number is non-negative, return the number itself (absolute value).
//     }
// }

// int main() {
//     int num;
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     int abs = absValue(num);

//     printf("The absolute value of %d is %d\n", num, abs);

//     return 0;
// }
