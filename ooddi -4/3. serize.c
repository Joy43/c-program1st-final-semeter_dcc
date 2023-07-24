#include <stdio.h>

double harmonicSeriesSum(int n) {
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    return sum;
}

int main() {
    int n = 11;
    double sum = harmonicSeriesSum(n);

    printf("Sum of the harmonic series up to %d: %.6lf\n", n, sum);

    return 0;
}
