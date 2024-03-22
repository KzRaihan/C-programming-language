/*
   shortest job first without arrival time
*/
#include <stdio.h>
#include <conio.h>
#define max 30

int main()
{
    int i, j, n, temp, p[max], bt[max], wt[max], tat[max];

    float awt = 0, atat = 0;

    printf("Enter the total number of processes: ");
    scanf("%d", &n);

    printf("Enter the process number sequence: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    // input burst time form user
    printf("Enter Burst time of each process: ");
    for (i = 0; i < n; i++)
    {
        printf("bt[%d]: ", i + 1);
        scanf("%d", &bt[i]);
    }

    // applying bubble sort technique to sort process according the process burst time
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (bt[j] > bt[j + 1])
            {
                // burst time sort
                temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;

                // process sort according to burst time

                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    // calculation waiting time and turn around time
    printf("Process\t\t Burst time\t\t Waiting time\t\t Turn around time\n");
    for (i = 0; i < n; i++)
    {
        wt[i] = 0;
        tat[i] = 0;
        for (j = 0; j < i; j++)
        {
            wt[i] = wt[i] + bt[j];
        }

        tat[i] = wt[i] + bt[i];
        awt = awt + wt[i];    // Sum of total waiting time
        atat = atat + tat[i]; // sum of total turn around time

        printf("%d\t\t\t  %d\t\t\t  %d\t\t\t  %d\n", p[i], bt[i], wt[i], tat[i]);
    }
    awt = awt / n;   // sum of awt/number of process
    atat = atat / n; // sum of atat/number of process

    printf("Average Waiting time: %.2f\n", awt);
    printf("Average turn around time: %.2f\n", atat);

    return 0;
}
/*
  n = number of process
  p[max] = processes sequence hold
  bt[max] = burst time
  wt[max] = waiting time
  tat[max] = turn around time


*/