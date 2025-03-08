#include <stdio.h>

int main() {
    int choice;
    float area, r, l, w, b, h;

    printf("1. Circle\n2. Rectangle\n3. Triangle\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
            printf("Enter radius: ");
            scanf("%f", &r);
            area = 3.1416 * r * r;
            printf("Area of Circle = %.2f\n", area);
            break;
        case 2:
            printf("Enter length and width: ");
            scanf("%f %f", &l, &w);
            area = l * w;
            printf("Area of Rectangle = %.2f\n", area);
            break;
        case 3:
            printf("Enter base and height: ");
            scanf("%f %f", &b, &h);
            area = 0.5 * b * h;
            printf("Area of Triangle = %.2f\n", area);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}

