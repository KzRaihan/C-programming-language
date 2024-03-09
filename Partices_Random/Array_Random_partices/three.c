
// if you provide wrong syntax provide the show erro message.
//* when provide variable type array size then provide erro message.
#include <stdio.h>

int main()
{
    int n = 4;
    int arr[n] = {4, 3, 2, 6}; // arr[n] is the wrong syntax

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}