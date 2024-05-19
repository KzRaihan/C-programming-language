// Write a program to enter price of three items and print their final cost with gst(18%).

#include <stdio.h>
int main()
{
    int arr[3] = {500, 2000, 3300};
    int findgst;
    for (int i = 0; i < 3; i++)
    {
        findgst = arr[i] * 18.0 / 100;
        arr[i] = findgst + arr[i];
    }
    printf("After adding gst then prices of item\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%.2f\t", (float)arr[i]);
        //     padding  || type casting
    }

    return 0;
}