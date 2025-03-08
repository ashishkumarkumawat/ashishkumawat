#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int n) {
    int sum = 0, temp = n, digits = 0;
    
    // Count the number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    
    // Calculate the sum of each digit raised to the power of the number of digits
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    
    return (sum == n);
}

// Function to check if a number is a Perfect number
int isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i <= n / 2; i++) {  // Check divisors up to n/2
        if (n % i == 0) {
            sum += i;
        }
    }
    
    return (sum == n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    if (isPerfect(num))
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is not a Perfect number.\n", num);

    return 0;
}

