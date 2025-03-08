#include <stdio.h>

int main() {
    int temp;
    printf("Enter temperature in °C: ");
    scanf("%d", &temp);

    if (temp < 0)
        printf("Freezing weather\n");
    else if (temp <= 10)
        printf("Very Cold weather\n");
    else if (temp <= 20)
        printf("Cold weather\n");
    else if (temp <= 30)
        printf("Normal temperature\n");
    else if (temp <= 40)
        printf("Hot weather\n");
    else
        printf("Very Hot weather\n");

    return 0;
}

