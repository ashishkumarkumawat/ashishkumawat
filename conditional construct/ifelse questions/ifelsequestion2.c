#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three angles: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c == 180)
        printf("Triangle is possible.\n");
    else
        printf("Triangle is not possible.\n");

    return 0;
}

