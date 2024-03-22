#include <stdio.h>
#include <math.h>
#define max 30

int main()
{
    int i, j, n, temp, pos, bt[max], pr[max], wt[max], tat[max];

    float awt = 0, atat = 0;

    printf("\nEnter Number of process: ");
    scanf("%d", &n);

    printf("\nEnter burst time  of each process: \n");
    for (i = 0; i < n; i++)
    {
        printf("bt[%d]: ", i + 1);
        scanf("%d", &bt[i]);
    }

    printf("\nEnter priority of each process: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &pr[i]);
    }

    // arrange process position and burst time according the process priority
    for (i = 0; i < n; i++)
    {
        pos = i;

        for (j = i + 1; j < n; j++)
        {
            if (pr[j] < pr[pos]) // compare to process which process priority is first
            {
                pos = j;
            }
        }
        // sort position according to priority
        temp = pr[i];
        pr[i] = pr[pos];
        pr[pos] = temp;

        // sort burst time according to priority
        temp = bt[i];
        bt[i] = bt[pos];
        bt[pos] = temp;
    }

    // Calculation waiting time and turn around time
    wt[0] = 0;
    printf("process\t\t Burst time\t\t Priority\t\t Waiting time\t\t turnAround time\n");
    for (i = 0; i < n; i++)
    {
        wt[i] = 0;
        tat[i] = 0;

        for (j = 0; j < i; j++)
        {
            wt[i] = wt[i] + bt[j];
        }
        tat[i] = wt[i] + bt[i];

        awt = awt + wt[i];
        atat = atat + tat[i];

        printf("%d\t\t\t  %d\t\t\t  %d\t\t\t  %d\t\t\t  %d\n", i + 1, bt[i], pr[i], wt[i], tat[i]);
    }
    awt = awt / n;
    atat = atat / n;

    printf("Average waiting time: %.2f\n", awt);
    printf("Average turn around time: %.2f\n", atat);

    return 0;
}