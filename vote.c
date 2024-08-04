#include <stdio.h>
#include <string.h> 
int main() {
    int age;
    char citizen[20]; 
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter country name: ");
    scanf("%s", citizen); 
    if (age >= 18 && strcmp(citizen, "india") == 0) { 
        printf("Eligible\n");
    } else {
        printf("Not eligible\n");
    }
    return 0;
}
