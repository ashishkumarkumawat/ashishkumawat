#include <stdio.h>

long factorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

double seriesSum(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (double)factorial(i) / i;
    }
    return sum;
}

int main() {
    printf("Sum of the series: %.2lf\n", seriesSum(5));
    return 0;
}

