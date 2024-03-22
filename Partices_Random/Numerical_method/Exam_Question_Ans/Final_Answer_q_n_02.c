#include <stdio.h>
#include <math.h>

int main()
{
    int row, col;

    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter column: ");
    scanf("%d", &col);

    // matrix first or A
    // input first or A matrix from user

    int first[row][col];

    printf("Enter the First matrix Element: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("first[%d][%d] : ", i, j);
            scanf("%d", &first[i][j]);
        }
        printf("\n");
    }

    // matrix second or B
    // input first or A matrix from user

    int second[row][col];

    printf("\nEnter the second matrix Element: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("second[%d][%d] : ", i, j);
            scanf("%d", &second[i][j]);
        }
        printf("\n");
    }

    // Display or output the first matrix
    printf("\nFirst Matrix: \n");
    for (int i = 0; i < row; i++)
    {
        printf("\t");
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", first[i][j]);
        }
        printf("\n");
    }

    // Display or output the second matrix
    printf("\nSecond Matrix: \n");
    for (int i = 0; i < row; i++)
    {
        printf("\t");
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", second[i][j]);
        }
        printf("\n");
    }

    // find Addition
    // * Calculation Addition operation

    int add[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            add[i][j] = first[i][j] + second[i][j];
        }
    }

    // find Subtraction
    // * Calculation Subtraction operation

    int sub[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sub[i][j] = first[i][j] - second[i][j];
        }
    }

    // * Displaying or output Addition operation
    printf("\nAddition: \n");
    for (int i = 0; i < row; i++)
    {
        printf("\t");
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }

    // * Displaying or output Subtraction operation
    printf("\nSubtraction: \n");
    for (int i = 0; i < row; i++)
    {
        printf("\t");
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }

    // find Multiplication for Addition and Subtraction matrix
    // * Calculation Multiplication operation
    int mul[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < col; k++)
            {
                mul[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    // * Displaying or output Multiplication operation
    printf("\nMultiplication: \n");
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