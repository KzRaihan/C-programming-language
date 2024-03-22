/*
   write a single program to take two matrix a,b from user.
   >> Addition
   >> subtraction
   >> multiplication(base on add and subtract)
*/
#include <stdio.h>

int main()
{
    // must be a square matrix
    int row, col;
    printf("\nEnter the number of rows of A matrix: ");
    scanf("%d", &row);

    printf("Enter the number of columns of A matrix: ");
    scanf("%d", &col);

    // * input A matrix form user
    int A[row][col];
    printf("Enter the Element of A matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    // * input B matrix from user
    int B[row][col];
    printf("\nEnter Element of Matrix B\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    // * output A matrix
    printf("\nA matrix: \n");
    for (int i = 0; i < row; i++)
    {
        printf("\t");
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // * output B matrix
    printf("\nB Matrix: \n");
    for (int i = 0; i < row; i++)
    {
        printf("\t");
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    // * Calculation Addition X = A + B matrix
    int X[row][col];
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            X[i][j] = A[i][j] + B[i][j];
        }
    }

    // * output  X = A + B matrix
    printf("\nX = A + B Matrix: \n");
    for (int i = 0; i < row; i++)
    {
        printf("\t");
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", X[i][j]);
        }
        printf("\n");
    }

    // * Calculation Subtraction X = A - B matrix
    int Y[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Y[i][j] = A[i][j] - B[i][j];
        }
    }

    // * output X = A - B matrix
    printf("\nY = A - B Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        printf("\t");
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", Y[i][j]);
        }
        printf("\n");
    }

    // * Calculation Multiplication multi_matrix[i][j] = X[i][j] * Y[i][j]
    /*

    int M[row][col];
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < row; k++)
            {
                sum = sum + X[i][k] * Y[k][j];
            }
            M[i][j] = sum;
            sum = 0;
        }
    }
    */
    int mul[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < col; k++)
            {
                mul[i][j] += X[i][k] * Y[k][j];
            }
        }
        printf("\n");
    }

    // * print the Multiplication matrix
    printf("\nMultiplication matrix: \n");
    for (int i = 0; i < row; i++)
    {
        printf("\t");
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}