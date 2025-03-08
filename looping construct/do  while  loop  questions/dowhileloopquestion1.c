#include <stdio.h>

int main() {
    int count = 0, num;
    float sum = 0.0;

    printf("Enter numbers (negative to stop):\n");
    do {
        scanf("%d", &num);
        if (num >= 0) {
            sum += num;
            count++;
        }
    } while (num >= 0);

    if (count > 0)
        printf("Average: %.2f\n", sum / count);
    else
        printf("No numbers entered.\n");

    return 0;
}

