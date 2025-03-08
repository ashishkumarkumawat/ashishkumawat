#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Harmonic series: ");
    for (int i = 1; i <= n; i++) {
        printf("1/%d ", i);
        sum += 1.0 / i;
    }

    printf("\nSum: %.4lf\n", sum);
    return 0;
}

