#include <stdio.h>

int main()
{
    float arr[5];

    printf("Enter 5 iterm prices: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &arr[i]);
    }

    printf("\nEach of item prices after add gst(15%%):\n");
    float gst;
    for (int i = 0; i < 5; i++)
    {
        gst = (arr[i] * (15.0 / 100));
        // printf("%f\n", gst);
        printf("%.2f\n", arr[i] + gst);
    }

    return 0;
}