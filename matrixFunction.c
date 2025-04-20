#include <stdio.h>
void matrixMultiplication(int a[10][10], int b[10][10], int c[10][10], int r1, int c1, int r2, int c2);
void matrixTranspose(int a[10][10], int b[10][10], int r, int c);
void matrixAddition(int a[10][10], int b[10][10], int c[10][10], int r, int c1);
void matrixSubtraction(int a[10][10], int b[10][10], int c[10][10], int r, int c1);
void matrixInverse(int a[10][10], int b[10][10], int r, int c);
void matrixDeterminant(int a[10][10], int r, int c, int *det);
int main(){
    int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2, det;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            scanf("%d", &b[i][j]);
        }
    }
    matrixMultiplication(a, b, c, r1, c1, r2, c2);
    matrixTranspose(a, b, r1, c1);
    matrixAddition(a, b, c, r1, c1);
    matrixSubtraction(a, b, c, r1, c1);
    matrixInverse(a, b, r1, c1);
    matrixDeterminant(a, r1, c1, &det);
    return 0;
}
void matrixMultiplication(int a[10][10], int b[10][10], int c[10][10], int r1, int c1, int r2, int c2){
    if (c1 != r2){
        printf("Matrix multiplication not possible.\n");
        return;
    }
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++){
            c[i][j] = 0;
            for (int k = 0; k < c1; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
void matrixTranspose(int a[10][10], int b[10][10], int r, int c){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            b[j][i] = a[i][j];
        }
    }
    printf("Result of matrix transpose:\n");
    for (int i = 0; i < c; i++){
        for (int j = 0; j < r; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}
void matrixAddition(int a[10][10], int b[10][10], int c[10][10], int r, int c1){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c1; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Result of matrix addition:\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c1; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
void matrixSubtraction(int a[10][10], int b[10][10], int c[10][10], int r, int c1){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c1; j++){
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Result of matrix subtraction:\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c1; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
void matrixInverse(int a[10][10], int b[10][10], int r, int c){
    // Inverse calculation is not implemented in this example.
    printf("Matrix inverse calculation is not implemented.\n");
}
void matrixDeterminant(int a[10][10], int r, int c, int *det){
    // Determinant calculation is not implemented in this example.
    printf("Matrix determinant calculation is not implemented.\n");
}