/*
   c program to implement fcfs scheduling without arrival time.
*/
#include <stdio.h>
#include <conio.h>
#define max 30

int main()
{
    int i, j, n, bt[max], wt[max], tat[max];
    float awt = 0, atat = 0;

    printf("\nEnter Numbers of processes: ");
    scanf("%d", &n);

    // input form user to burst time
    printf("\nEnter Each process burst time\n");
    for (i = 0; i < n; i++)
    {
        printf("bt[%d]: ", i + 1);
        scanf("%d", &bt[i]);
    }
    printf("Process\t\t\t  Burst time\t\t\t  waiting time\t\t\t  Turn around time\n");
    for (i = 0; i < n; i++)
    {
        wt[i] = 0;
        tat[i] = 0;

        for (j = 0; j < i; j++)
        {
            wt[i] += bt[j];
        }
        tat[i] = wt[i] + bt[i];
        awt += wt[i];
        atat += tat[i];

        printf("%d\t\t\t\t %d\t\t\t\t   %d\t\t\t\t   %d\n", i + 1, bt[i], wt[i], tat[i]);
    }
    awt = awt / n;
    atat = atat / n;

    printf("Average waiting time: %.2f\n", awt);
    printf("Average turn around time: %.2f\n", atat);

    return 0;
}
/*
  * n = number of total processes
   bt = burst time
   wt = waiting time
   tat = turn around time

   awt = average waiting time
   atat = average turn around time

*/