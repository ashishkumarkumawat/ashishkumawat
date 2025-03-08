#include <stdio.h>

int main() {
    float height, width, perimeter;
    printf("Enter height and width of the rectangle: ");
    scanf("%f %f", &height, &width);
    perimeter = 2 * (height + width);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);
    return 0;
}

