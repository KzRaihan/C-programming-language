/*
2. What will be the output of the following C code?

    int a = 0, i;
    for (i = 0;i < 5; i++)
    {
        a++;
        continue;
    }
    printf("%d %d",i,a);


*/
#include <stdio.h>

int main()
{
    int a = 0, i;
    for (i = 0; i < 5; i++)
    {
        a++;
        continue;
    }
    printf("%d %d", i, a);

    return 0;
}
/*
           * code explain
>> 1st iteration
        a = 0
        i = 0
    ----------------
    -> loop init part:
        i = 0
    -> loop condition part
        i < 5
        0 < 5 (true go to loop body)

      loop body:
           a++
           a = a + 1
             =  0 + 1
             = 1
           continue;
             skip or jump the statement
    -> increment part
           i++
           i = i + 1
             = 0 + 1
>> 2nd iteration
        a = 1
        i = 1
    ----------------
    -> loop init part:
        i = 1
    -> loop condition part
        i < 5
        1 < 5 (true go to loop body)

      loop body:
           a++
           a = a + 1
             =  1 + 1
             = 2
           continue;
             skip or jump the statement
    -> increment part
           i++
           i = i + 1
             = 1 + 1
             = 2
>> 3th iteration
        a = 2
        i = 2
    ----------------
    -> loop init part:
        i = 2
    -> loop condition part
        i < 5
        2 < 5 (true go to loop body)

      loop body:
           a++
           a = a + 1
             =  2 + 1
             =  3
           continue;
             skip or jump the statement
      -> increment part
           i++
           i = i + 1
             = 2 + 1
             = 3
>> 4th iteration
        a = 3
        i = 3
    ----------------
    -> loop init part:
        i = 3
    -> loop condition part
        i < 5
        3 < 5 (true go to loop body)

      loop body:
           a++
           a = a + 1
             =  3 + 1
             =  4
           continue;
             skip or jump the statement
      -> increment part
           i++
           i = i + 1
             = 3 + 1
             = 4
>> 4th iteration
        a = 4
        i = 4
    ----------------
    -> loop init part:
        i = 4
    -> loop condition part
        i < 5
        4 < 5 (true go to loop body)

      loop body:
           a++
           a = a + 1
             =  4 + 1
             =  5
           continue;
             skip or jump the statement
      -> increment part
           i++
           i = i + 1
             = 4 + 1
             = 5
>> 5th iteration
        a = 5
        i = 5
    ----------------
    -> loop init part:
        i = 5
    -> loop condition part
        i < 5
        5 < 5 (false can't go to loop body)
    -> out of the loop

-> printf(i, a); // here, i = 5 , a = 5

     * Final output: 5 5






*/