#include <stdio.h>

int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Initialize max to the smallest possible value
    int max = -1;

    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);

        // Update max if the current number is greater
        if (num > max)
        {
            max = num;
        }
    }

    printf("Maximum number is: %d\n", max);

    return 0;
}
