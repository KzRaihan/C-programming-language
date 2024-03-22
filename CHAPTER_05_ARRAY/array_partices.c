#include <stdio.h>

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array element: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0], minIdx;
    int max = arr[0], mxIdx;

    // find min and max
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minIdx = i;
        }
        else if (arr[i] > max)
        {
            max = arr[i];
            mxIdx = i;
        }
    }
    int temp = arr[mxIdx];
    arr[mxIdx] = arr[minIdx];
    arr[minIdx] = temp;

    for (int i = 0; i < size; i++)
    {

        printf("%d\t", arr[i]);
    }

    return 0;
}