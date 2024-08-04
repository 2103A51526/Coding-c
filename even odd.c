#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    do {
        if (num % 2 == 0) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }  
        num=0;
    } while (num != 0);
    return 0;
}

