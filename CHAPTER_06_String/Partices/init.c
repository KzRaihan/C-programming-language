#include <stdio.h>

int main()
{
    char name[] = "KzRaihan";
    printf("%c", name[0]); // access only first index character | here: K
    printf("\n%s", name);  // access hold the string | here, KzRaihan

    int msize = sizeof(name);
    printf("Memory occupied: %d bytes\n", msize); //

    char strl[20] = "Raihan";
    int Msize = sizeof(strl);
    printf("\nMemory occupied: %d bytes\n", Msize); //

    char str1[] = {'R', 'A', 'i', 'h', 'a', 'n'};
    int M_size = sizeof(str1);
    printf("\nMemory occupied: %d bytes\n", M_size); //

    char str2[10] = {'R', 'A', 'i', 'h', 'a', 'n'};
    int M_size1 = sizeof(str2);
    printf("\nMemory occupied: %d bytes\n", M_size1); //

    char str3[14] = "Bangladesh";
    int M_size3 = sizeof(str2);
    printf("\nMemory occupied: %d bytes\n", M_size3); //

    return 0;
}