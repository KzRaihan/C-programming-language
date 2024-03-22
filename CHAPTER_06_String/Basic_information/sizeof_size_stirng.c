/*
 string size: how many item is

*/
#include <stdio.h>

int main()
{
    // 2nd form
    char str1[20] = "Raihan";

    int Msize = sizeof(str1); // 20 bytes
    printf("\nMemory occupied str2: %d bytes\n", Msize);

    int size = Msize / sizeof(char);
    printf("string size : %d\n", size);

    // 3th form
    char str3[] = {'R', 'A', 'i', 'h', 'a', 'n'};
    int M_size = sizeof(str3); // 6 bytes
    printf("\nMemory occupied str3: %d bytes\n", M_size);

    int size1 = M_size / sizeof(str3[0]);
    printf("string size : %d\n", size1);

    return 0;
}