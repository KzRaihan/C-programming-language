/*
  * array is zero base index.
  start with index with zero.

*/
#include <stdio.h>

int main()
{
  int arr[5]; // array declare

  // input array element form user

  printf("\nEnter array 1st Element: ");
  scanf("%d", &arr[0]);

  printf("\nEnter array 2nd Element: ");
  scanf("%d", &arr[1]);

  printf("\nEnter array 3th Element: ");
  scanf("%d", &arr[2]);

  printf("\nEnter array 4th Element: ");
  scanf("%d", &arr[3]);

  printf("\nEnter array 5th Element: ");
  scanf("%d", &arr[4]);

  // output array element to console

  printf("arr[0] = %d\n", arr[0]);
  printf("arr[1] = %d\n", arr[1]);
  printf("arr[2] = %d\n", arr[2]);
  printf("arr[3] = %d\n", arr[3]);
  printf("arr[4] = %d\n", arr[4]);

  return 0;
}