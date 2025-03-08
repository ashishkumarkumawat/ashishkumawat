#include <stdio.h>

int main() {
    char forename[50], surname[50];
    int yearOfBirth;
    
    printf("Enter forename: ");
    scanf("%s", forename);
    
    printf("Enter surname: ");
    scanf("%s", surname);
    
    printf("Enter year of birth: ");
    scanf("%d", &yearOfBirth);
    
    printf("%s %s %d\n", forename, surname, yearOfBirth);
    return 0;
}
