#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount;
    char choice;

    do {
        printf("Enter principal amount: ");
        scanf("%lf", &principal);
        printf("Enter interest rate: ");
        scanf("%lf", &rate);
        printf("Enter time (years): ");
        scanf("%lf", &time);

        amount = principal * pow((1 + rate / 100), time);
        printf("Compound Interest: %.2lf\n", amount);

        printf("Do you want to calculate again? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

