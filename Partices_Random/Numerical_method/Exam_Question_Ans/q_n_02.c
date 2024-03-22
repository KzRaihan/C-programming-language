#include <stdio.h>

int main()
{
    int row, col;

    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter column: ");
    scanf("%d", &col);

    // Input for first matrix
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

    // Input for second matrix
    int second[row][col];
    printf("Enter the Second matrix Element: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("second[%d][%d] : ", i, j);
            scanf("%d", &second[i][j]);
        }
        printf("\n");
    }

    // Addition
    int add[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            add[i][j] = first[i][j] + second[i][j];
        }
    }

    // Subtraction
    int sub[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sub[i][j] = first[i][j] - second[i][j];
        }
    }

    // Multiplication using results from addition and subtraction
    int mul[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mul[i][j] = add[i][j] * sub[i][j];
        }
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

    // Displaying multiplication
    printf("\nMultiplication using results from addition and subtraction: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
