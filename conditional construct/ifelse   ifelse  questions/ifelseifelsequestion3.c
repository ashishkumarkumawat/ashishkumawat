#include <stdio.h>

int main() {
    int roll, phy, chem, comp, total;
    float percent;
    char name[50];

    printf("Enter Roll No, Name, Marks (Physics, Chemistry, Computer): ");
    scanf("%d %s %d %d %d", &roll, name, &phy, &chem, &comp);

    total = phy + chem + comp;
    percent = total / 3.0;

    printf("Total: %d\nPercentage: %.2f%%\n", total, percent);

    if (percent >= 60) 
        printf("Division: First\n");
    else if (percent >= 50) 
        printf("Division: Second\n");
    else 
        printf("Division: Third\n");

    return 0;
}

