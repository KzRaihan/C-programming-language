// printing reverse of an array
#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of array: \n");
    for (int i = 0; i < size;i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d",&arr[i]);
    }
    printf("\nReverse of array is: \n");
    for (int i = size -1; i >= 0;i--)
    {
        printf("%d\t", arr[i]);
    }

        return 0;
}