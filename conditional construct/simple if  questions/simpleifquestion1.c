#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a == b)
        printf("Numbers are equal.\n");

    return 0;
}

