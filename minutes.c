#include <stdio.h>

int main() {
    int hours, minutes, totalMinutes;
    printf("Enter hours and minutes: ");
    scanf("%d %d", &hours, &minutes);
    totalMinutes = (hours * 60) + minutes;
    printf("Total minutes: %d\n", totalMinutes);
    return 0;
}
