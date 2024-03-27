#include <stdio.h>

int main() {
    int size;

    printf("Enter size");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int upperTriangleSum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            upperTriangleSum += matrix[i][j];
        }
    }

    printf("Original matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Sum of elements in the upper triangle: %d\n", upperTriangleSum);

    return 0;
}
