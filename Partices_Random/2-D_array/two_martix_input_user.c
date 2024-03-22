/*
   write a single program to take two matrix a,b from user.
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

    return 0;
}