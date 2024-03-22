/*
   * How many Memory is/are occupied string in byte form.

   -> in my machine(computer): each character occupied 1 byte
*/
#include <stdio.h>

int main()
{
   // 1st form
   char name[] = "KzRaihan"; // double quotation with no size declare it is automatic count the null character
   printf("%c", name[0]);    // access only first index character | here-> o/p: K
   printf("\n%s", name);     // access hold the string | here, KzRaihan

   int msize = sizeof(name); // 8 + 1 => 9 bytes
   printf("\nMemory occupied name string : %d bytes\n", msize);

   // 2nd form
   char str1[20] = "Raihan";
   int Msize = sizeof(str1); // 20 bytes
   printf("\nMemory occupied str2: %d bytes\n", Msize);

   // 3th form
   char str2[] = {'R', 'A', 'i', 'h', 'a', 'n'}; // without size and declare single quotation no null character is not counted.
   int M_size = sizeof(str2);                    // 6 bytes
   printf("\nMemory occupied str3: %d bytes\n", M_size);

   // 4th form
   char str3[10] = {'R', 'A', 'i', 'h', 'a', 'n'};
   int M_size1 = sizeof(str3); // 10 bytes
   printf("\nMemory occupied: %d bytes\n", M_size1);

   // 5th
   char str4[15] = "Bangladesh"; // string automatic include null character not count
   int M_size3 = sizeof(str4);
   printf("\nMemory occupied: %d bytes\n", M_size3); //

   return 0;
}
/*
                            * code explain
    * how much memory is occupied or block in memory
    ->  // 1st form
    char name[] = "KzRaihan";
                = 8 character + 1 Null character
                = (8 + 1)
                =  9 bytes
    ->     // 2nd form
    char str1[20] = "Raihan";
         when srt1 string array declare with size 20. it's occupied 20 bytes memory.


    ->    // 3th form
    char str3[] = {'R', 'A', 'i', 'h', 'a', 'n'};
             here, = 6 + 0   // when string is initialization single character is counted the null character
                   = 6       // but string size is not declare then, it's not count.
    ->  // 4th form
    char str2[10] = {'R', 'A', 'i', 'h', 'a', 'n'};
     here, declare 10 bytes so, it's direct occupied 10 bytes memory

    ->  // 5th
    char str3[15] = "Bangladesh";
     * when declare with double quotation it's automatic include null character but it's not for memory occupied
     so,
        Bangladesh = 10 character
        it's occupied = 10 bytes memory


*/