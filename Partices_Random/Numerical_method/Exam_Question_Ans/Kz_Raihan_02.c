#include <stdio.h>
#include <math.h>

int main()
{
    int row, col;

    printf("Enter rows : ");
    scanf("%d", &row);

    printf("Enter columns : ");
    scanf("%d", &col);

    // * input first matrix form user
    int first[row][col];
    printf("\nEnter the Element of the first matrix \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("first[%d][%d]: ", i, j);
            scanf("%d", &first[i][j]);
        }
        printf("\n");
    }

    // * input second matrix form user
    int second[row][col];
    printf("\nEnter the Element of the second matrix\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("second[%d][%d]: ", i, j);
            scanf("%d", &second[i][j]);
        }
        printf("\n");
    }

    // * Display or output First matrix
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

    // * Display or output Second matrix
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

    // * Find the Addition and subtraction of first and second matrices
    int add[row][col];
    int sub[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            add[i][j] = first[i][j] + second[i][j];
            sub[i][j] = first[i][j] - second[i][j];
        }
    }

    // * Display or output addition of first and second matrices
    printf("\nAddition of first and second matrices: \n");
    printf("\nadd: \n");
    for (int i = 0; i < row; i++)
    {
        printf("\t");
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }

    // * Display or output subtraction of first and second matrices
    printf("\nSubtraction of first and second matrices: \n");
    printf("\nsub: \n");
    for (int i = 0; i < row; i++)
    {
        printf("\t");
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }

    // * Find the multiplication of add and sub matrix
    printf("\nMultiplication of add and sub matrix\n");
    int mul[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < col; k++)
            {
                mul[i][j] = mul[i][j] + (add[i][k] * sub[k][j]);
            }
        }
    }
    // * Display or output multiplication of add and sub matrix
    printf("mul: \n");
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