#include <stdio.h>

int main() {
    int units;
    float bill, surcharge = 0;
    
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 199)
        bill = units * 1.20;
    else if (units < 400)
        bill = units * 1.50;
    else if (units < 600)
        bill = units * 1.80;
    else
        bill = units * 2.00;

    if (bill > 400)
        surcharge = bill * 0.15;

    bill += surcharge;

    if (bill < 100)
        bill = 100;

    printf("Total electricity bill: Rs. %.2f\n", bill);
    return 0;
}

