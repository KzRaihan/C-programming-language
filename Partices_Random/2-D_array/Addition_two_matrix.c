/*
   write a single program to take two matrix a,b from user.
   >> Addition
   >> subtraction
*/
#include <stdio.h>

int main()
{
    int row, col;
    printf("\nEnter the number of rows of A matrix: ");
    scanf("%d", &row);

    printf("Enter the number of columns of A matrix: ");
    scanf("%d", &col);

    int A[row][col];

    // * input A matrix
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

    // * input B matrix

    int row1, col1;

    printf("\n Enter Row for matrix B: ");
    scanf("%d", &row1);

    printf("\n Enter Column  for matrix B:");
    scanf("%d", &col1);

    int B[row1][col1];

    printf("\nEnter Element of Matrix B\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
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
    for (int i = 0; i < row1; i++)
    {
        printf("\t");
        for (int j = 0; j < col1; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    // * Calculation Addition X = A + B matrix
    int X[row][col];

    for (int i = 0; i < row1; i++)
    {

        for (int j = 0; j < col1; j++)
        {
            X[i][j] = A[i][j] + B[i][j];
        }
    }

    // * output  X = A + B matrix
    printf("\nX = A + B Matrix: \n");
    for (int i = 0; i < row1; i++)
    {
        printf("\t");
        for (int j = 0; j < col1; j++)
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

    return 0;
}