#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Positive ");
        if (num % 2 == 0) 
            printf("Even\n");
        else 
            printf("Odd\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}

