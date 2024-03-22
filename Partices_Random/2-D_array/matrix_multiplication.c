#include <stdio.h>

int main()
{
    int row1, col1;

    printf("Enter A matrix row1: ");
    scanf("%d", &row1);

    printf("Enter B matrix row2: ");
    scanf("%d", &col1);

    // * input matrix A
    int A[row1][col1];
    printf("\nEnter Element of A matrix\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    // * input matrix B
    printf("\nEnter B matrix\n");
    int B[row1][col1];
    printf("\nEnter Element of B matrix: \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("B[%d][%d] : ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("\n==================================================\n");
    // * output Matrix A
    printf("A =\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\n==================================================\n");

    //  * output matrix B
    printf("B =\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    printf("\n==================================================\n");
    int C[row1][col1]; // Matrix C is the resultant of multiplication of matrices A and B.

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // output the result
    for (int i = 0; i < row1; i++)
    {
        printf("\t");
        for (int j = 0; j < col1; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}