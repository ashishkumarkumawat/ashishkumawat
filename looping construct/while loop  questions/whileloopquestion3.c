#include <stdio.h>

#define SIZE 100

int main() {
    int arr[SIZE], num, count = 0, found;
    
    printf("Enter numbers (duplicate to stop):\n");
    while (1) {
        scanf("%d", &num);
        found = 0;

        for (int i = 0; i < count; i++) {
            if (arr[i] == num) {
                found = 1;
                break;
            }
        }

        if (found) {
            printf("Duplicate entered! Stopping input.\n");
            break;
        }

        arr[count++] = num;
    }

    return 0;
}

