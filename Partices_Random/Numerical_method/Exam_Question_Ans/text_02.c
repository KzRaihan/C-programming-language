#include <stdio.h>

int main()
{
    int row, col;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &row, &col);

    // Input for matrix A
    int A[row][col];
    printf("Enter elements for matrix A: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    // Input for matrix B
    int B[row][col];
    printf("Enter elements for matrix B: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    // Display matrix A
    printf("\nMatrix A: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // Display matrix B
    printf("\nMatrix B: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    // Addition (X = A + B)
    int X[row][col];
    printf("\nAddition of matrices A and B:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            X[i][j] = A[i][j] + B[i][j];
            printf("%d\t", X[i][j]);
        }
        printf("\n");
    }

    // Subtraction (Y = A - B)
    int Y[row][col];
    printf("\nSubtraction of matrices A and B:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Y[i][j] = A[i][j] - B[i][j];
            printf("%d\t", Y[i][j]);
        }
        printf("\n");
    }

    // Multiplication (result = X * Y)
    int result[row][col];
    printf("\nMultiplication of matrices X and Y:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < col; k++)
            {
                result[i][j] += X[i][k] * Y[k][j];
            }
            // printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    // print result matrix
    printf("Result Matrix: \n");
    for (int i = 0; i < row; ++i)
    {
        printf("\t");
        for (int j = 0; j < col; ++j)
        {
            printf("%d ", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}
