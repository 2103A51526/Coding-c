#include <stdio.h>
#include <limits.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    printf("Enter the order of the first matrix\n");
    scanf("%d %d", &r1, &c1);
    printf("Enter the order of the second matrix\n");
    scanf("%d %d", &r2, &c2);
    
    if (r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0) {
        printf("Invalid matrix order. Number of rows and columns should be positive integers.\n");
        return 0;
    }
    
    if (c1 != r2) {
        printf("Matrices are incompatible for multiplication\n");
        return 0;
    }

    long long total_elements_a = (long long)r1 * (long long)c1;
    long long total_elements_b = (long long)r2 * (long long)c2;
    if (total_elements_a > INT_MAX || total_elements_b > INT_MAX) {
        printf("Input limit exceeded. The size of the matrices cannot exceed the limit of %d elements.\n", INT_MAX);
        return 0;
    }

    int a[r1][c1], b[r2][c2], res[r1][c2];
    printf("Enter the elements of Matrix-A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            long long element;
            scanf("%lld", &element);
            if (element > INT_MAX || element < INT_MIN) {
                printf("Input limit exceeded. The value of an element cannot exceed the limit of %d.\n", INT_MAX);
                return 0;
            }
            a[i][j] = (int)element;
        }
    }

    printf("Enter the elements of Matrix-B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            long long element;
            scanf("%lld", &element);
            if (element > INT_MAX || element < INT_MIN) {
                printf("Input limit exceeded. The value of an element cannot exceed the limit of %d.\n", INT_MAX);
                return 0;
            }
            b[i][j] = (int)element;
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (k = 0; k < r2; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the two matrices is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}